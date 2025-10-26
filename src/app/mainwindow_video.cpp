#include "mainwindow.h"
#include "videoprocessor.h"
#include "videoprocessdialog.h"
#include "consts.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTimer>
#include <iostream>

/* This file contains video processing functionality for MainWindow */

void MainWindow::loadVideoSlot(const QString &fileName) {
    /* loads a preview frame from the video file */
    
    // Store the video path for later export
    currentVideoPath = fileName;
    
    // Create video processor to extract a preview frame
    VideoProcessor* processor = new VideoProcessor(this);
    
    // Get video info
    int width, height;
    if (!processor->getVideoInfo(fileName, width, height, videoFps, videoTotalFrames)) {
        QMessageBox::critical(this, tr("Error"), 
                            tr("Failed to read video information. Make sure FFmpeg is installed."));
        delete processor;
        currentVideoPath.clear();
        return;
    }
    
    // Extract first frame for preview
    QImage previewFrame = processor->extractSingleFrame(fileName, 0.0);
    
    delete processor;
    
    if (previewFrame.isNull()) {
        QMessageBox::critical(this, tr("Error"), 
                            tr("Failed to extract preview frame from video."));
        currentVideoPath.clear();
        return;
    }
    
    // Load the preview frame as a normal image
    loadImage(&previewFrame);
    
    // Setup and show timeline
    videoTimeline->setVideoInfo(videoTotalFrames, videoFps);
    videoTimeline->setCurrentFrame(0);
    videoTimeline->setVisible(true);
    
    // Enable the Export Video action
    ui->actionExportVideo->setEnabled(true);
    
    // Show notification that this is a video preview
    QString videoInfo = QString(tr("Video loaded: %1\n%2x%3, %4 fps, %5 frames\n\nUse timeline to preview different frames.\nAdjust dithering settings, then use File → Export Video to process the entire video."))
        .arg(QFileInfo(fileName).fileName())
        .arg(width)
        .arg(height)
        .arg(QString::number(videoFps, 'f', 2))
        .arg(videoTotalFrames);
    
    notification->showText(videoInfo, 8000);
}

void MainWindow::exportVideoSlot() {
    /* exports the currently loaded video with the current dithering settings */
    
    if (currentVideoPath.isEmpty()) {
        QMessageBox::information(this, tr("No Video Loaded"), 
                               tr("Please load a video file first using File → Open Video or drag & drop."));
        return;
    }
    
    // Ask user for output location
    QString defaultOutput = QFileInfo(currentVideoPath).absolutePath() + QDir::separator() + 
                           QFileInfo(currentVideoPath).baseName() + "_dithered.mp4";
    
    QString outputPath = QFileDialog::getSaveFileName(this,
                                                      tr("Export Dithered Video"),
                                                      defaultOutput,
                                                      tr("Video Files (*.mp4 *.avi *.mov *.mkv)"));
    if (outputPath.isEmpty()) {
        return; // User cancelled
    }
    
    // Create and show progress dialog
    VideoProcessDialog* dialog = new VideoProcessDialog(this);
    
    // Create video processor
    VideoProcessor* processor = new VideoProcessor(this);
    
    // Get video info
    int width, height, frameCount;
    double fps;
    if (!processor->getVideoInfo(currentVideoPath, width, height, fps, frameCount)) {
        QMessageBox::critical(this, tr("Error"), 
                            tr("Failed to read video information."));
        delete processor;
        delete dialog;
        return;
    }
    
    dialog->setTotalFrames(frameCount);
    dialog->setStatus(tr("Extracting frames from video..."));
    
    // Connect signals
    connect(processor, &VideoProcessor::progressChanged, dialog, &VideoProcessDialog::setProgress);
    connect(processor, &VideoProcessor::frameProcessed, dialog, &VideoProcessDialog::setPreviewFrame);
    connect(processor, &VideoProcessor::finished, dialog, &VideoProcessDialog::processingComplete);
    connect(processor, &VideoProcessor::errorOccurred, dialog, &VideoProcessDialog::showError);
    connect(dialog, &VideoProcessDialog::cancelRequested, processor, &VideoProcessor::cancel);
    
    // Clean up when done
    connect(processor, &VideoProcessor::finished, [processor, dialog](bool success, const QString&) {
        processor->deleteLater();
        if (success) {
            QTimer::singleShot(2000, dialog, &QDialog::accept);
        }
    });
    
    // Create dither callback based on current settings
    auto ditherCallback = [this](const QImage& frame, int frameNum) -> QImage {
        // Apply dithering to the frame and return dithered image
        QImage ditheredFrame;
        
        // Debug: print which algorithm is being used (first frame only)
        if (frameNum == 0) {
            std::cerr << "=== VIDEO EXPORT DEBUG ===" << std::endl;
            std::cerr << "Tab Index: " << lastTabIndex << " (0=mono, 1=color)" << std::endl;
            std::cerr << "Dither Type: " << current_dither_type << std::endl;
            std::cerr << "Sub Dither Type: " << current_sub_dither_type << std::endl;
            std::cerr << "Frame size: " << frame.width() << "x" << frame.height() << std::endl;
            std::cerr << "=========================" << std::endl;
        }
        
        if (lastTabIndex == TAB_INDEX_MONO) {
            // Mono dithering
            int w = frame.width();
            int h = frame.height();
            
            // Create a temporary image hash for this frame
            ImageHashMono tempHash;
            tempHash.setSourceImage(&frame);
            
            // Apply the same brightness/contrast/gamma adjustments as the main image
            tempHash.brightness = imageHashMono.brightness;
            tempHash.contrast = imageHashMono.contrast;
            tempHash.gamma = imageHashMono.gamma;
            
            // IMPORTANT: Apply the adjustments to the source image
            tempHash.adjustSource();
            
            // Allocate output buffer
            uint8_t *out_buf = static_cast<uint8_t *>(calloc(w * h, sizeof(uint8_t)));
            
            // Get the source image (with adjustments applied)
            DitherImage* sourceImg = tempHash.getSourceImage();
            
            // Apply current dither algorithm synchronously
            switch (current_dither_type) {
                case ALL: {
                    bool randomize = ui->ALL_randomize->isChecked();
                    kallebach_dither(sourceImg, randomize, out_buf);
                } break;
                case GRD: {
                    bool altAlgorithm = ui->GRD_altAlgorithm->isChecked();
                    int width = ui->GRD_width->value();
                    int height = ui->GRD_height->value();
                    int minPixels = ui->GRD_minPixels->value();
                    grid_dither(sourceImg, width, height, minPixels, altAlgorithm, out_buf);
                } break;
                case DBS: {
                    int formula = ui->DBS_formula->currentIndex();
                    dbs_dither(sourceImg, formula, out_buf);
                } break;
                case THR: {
                    double threshold;
                    if (ui->THR_autoThreshold->isChecked()) {
                        threshold = auto_threshold(sourceImg);
                    } else {
                        threshold = ui->THR_threshold->value();
                    }
                    double jitter = ui->THR_jitter->value();
                    threshold_dither(sourceImg, threshold, jitter, out_buf);
                } break;
                case DOT: {
                    DotDiffusionMatrix* dm = nullptr;
                    DotClassMatrix* cm = nullptr;
                    switch(current_sub_dither_type) {
                        case DOT_KNU: dm = get_default_diffusion_matrix(); cm = get_knuth_class_matrix(); break;
                        case DOT_MKN: dm = get_default_diffusion_matrix(); cm = get_mini_knuth_class_matrix(); break;
                        case DOT_OKN: dm = get_default_diffusion_matrix(); cm = get_optimized_knuth_class_matrix(); break;
                        case DOT_M08: dm = get_default_diffusion_matrix(); cm = get_mese_8x8_class_matrix(); break;
                        case DOT_M16: dm = get_default_diffusion_matrix(); cm = get_mese_16x16_class_matrix(); break;
                        case DOT_G08: dm = get_guoliu8_diffusion_matrix(); cm = get_guoliu_8x8_class_matrix(); break;
                        case DOT_G16: dm = get_guoliu16_diffusion_matrix(); cm = get_guoliu_16x16_class_matrix(); break;
                        case DOT_SPR: dm = get_guoliu8_diffusion_matrix(); cm = get_spiral_class_matrix(); break;
                        case DOT_ISP: dm = get_guoliu8_diffusion_matrix(); cm = get_spiral_inverted_class_matrix(); break;
                        default: break;
                    }
                    if (dm != nullptr && cm != nullptr) {
                        dot_diffusion_dither(sourceImg, dm, cm, out_buf);
                        DotClassMatrix_free(cm);
                        DotDiffusionMatrix_free(dm);
                    }
                } break;
                case ERR: {
                    ErrorDiffusionMatrix* matrix = nullptr;
                    switch(current_sub_dither_type) {
                        case ERR_XOT: matrix = get_xot_matrix(); break;
                        case ERR_DIA: matrix = get_diagonal_matrix(); break;
                        case ERR_FYD: matrix = get_floyd_steinberg_matrix(); break;
                        case ERR_SF3: matrix = get_shiaufan3_matrix(); break;
                        case ERR_SF2: matrix = get_shiaufan2_matrix(); break;
                        case ERR_SF1: matrix = get_shiaufan1_matrix(); break;
                        case ERR_STK: matrix = get_stucki_matrix(); break;
                        case ERR_D1D: matrix = get_diffusion_1d_matrix(); break;
                        case ERR_D2D: matrix = get_diffusion_2d_matrix(); break;
                        case ERR_FFS: matrix = get_fake_floyd_steinberg_matrix(); break;
                        case ERR_JJN: matrix = get_jarvis_judice_ninke_matrix(); break;
                        case ERR_ATK: matrix = get_atkinson_matrix(); break;
                        case ERR_BRK: matrix = get_burkes_matrix(); break;
                        case ERR_SI3: matrix = get_sierra_3_matrix(); break;
                        case ERR_SI2: matrix = get_sierra_2row_matrix(); break;
                        case ERR_SIL: matrix = get_sierra_lite_matrix(); break;
                        case ERR_SPG: matrix = get_steve_pigeon_matrix(); break;
                        case ERR_RKI: matrix = get_robert_kist_matrix(); break;
                        case ERR_SSA: matrix = get_stevenson_arce_matrix(); break;
                        default: break;
                    }
                    if (matrix != nullptr) {
                        bool serpentine = ui->ERR_serpentine->isChecked();
                        double jitter = ui->ERR_jitter->value();
                        error_diffusion_dither(sourceImg, matrix, serpentine, jitter, out_buf);
                        ErrorDiffusionMatrix_free(matrix);
                    }
                } break;
                case LIP: {
                    DotClassMatrix* matrix = nullptr;
                    DotLippensCoefficients* coe = nullptr;
                    switch(current_sub_dither_type) {
                        case LIP_LI1:
                            matrix = get_dotlippens_class_matrix();
                            coe = get_dotlippens_coefficients1();
                            break;
                        case LIP_LI2:
                            matrix = get_dotlippens_class_matrix();
                            coe = get_dotlippens_coefficients2();
                            break;
                        case LIP_LI3:
                            matrix = get_dotlippens_class_matrix();
                            coe = get_dotlippens_coefficients3();
                            break;
                        case LIP_GUO:
                            matrix = get_guoliu_16x16_class_matrix();
                            coe = get_dotlippens_coefficients1();
                            break;
                        case LIP_MSE:
                            matrix = get_mese_16x16_class_matrix();
                            coe = get_dotlippens_coefficients1();
                            break;
                        case LIP_KNU:
                            matrix = get_knuth_class_matrix();
                            coe = get_dotlippens_coefficients1();
                            break;
                        default: break;
                    }
                    if (matrix != nullptr && coe != nullptr) {
                        dotlippens_dither(sourceImg, matrix, coe, out_buf);
                        DotLippensCoefficients_free(coe);
                        DotClassMatrix_free(matrix);
                    }
                } break;
                case ORD: {
                    OrderedDitherMatrix* matrix = nullptr;
                    if (current_sub_dither_type == ORD_VA2) {
                        int step = ui->ORD_VAR_step->value();
                        matrix = get_variable_2x2_matrix(step);
                    } else if (current_sub_dither_type == ORD_VA4) {
                        int step = ui->ORD_VAR_step->value();
                        matrix = get_variable_4x4_matrix(step);
                    } else if (current_sub_dither_type == ORD_IGR) {
                        int step = ui->ORD_IGR_step->value();
                        double a = ui->ORD_IGR_a->value();
                        double b = ui->ORD_IGR_b->value();
                        double c = ui->ORD_IGR_c->value();
                        matrix = get_interleaved_gradient_noise(step, a, b, c);
                    } else {
                        switch(current_sub_dither_type) {
                            case ORD_BLU: matrix = get_blue_noise_128x128(); break;
                            case ORD_BA2: matrix = get_bayer2x2_matrix(); break;
                            case ORD_BA3: matrix = get_bayer3x3_matrix(); break;
                            case ORD_BA4: matrix = get_bayer4x4_matrix(); break;
                            case ORD_BA8: matrix = get_bayer8x8_matrix(); break;
                            case ORD_B16: matrix = get_bayer16x16_matrix(); break;
                            case ORD_B32: matrix = get_bayer32x32_matrix(); break;
                            case ORD_DD1: matrix = get_dispersed_dots_1_matrix(); break;
                            case ORD_DD2: matrix = get_dispersed_dots_2_matrix(); break;
                            case ORD_VDD: matrix = get_ulichney_void_dispersed_dots_matrix(); break;
                            case ORD_NR1: matrix = get_non_rectangular_1_matrix(); break;
                            case ORD_NR2: matrix = get_non_rectangular_2_matrix(); break;
                            case ORD_NR3: matrix = get_non_rectangular_3_matrix(); break;
                            case ORD_NR4: matrix = get_non_rectangular_4_matrix(); break;
                            case ORD_ULY: matrix = get_ulichney_matrix(); break;
                            case ORD_UB5: matrix = get_ulichney_bayer_5_matrix(); break;
                            case ORD_CD1: matrix = get_bayer_clustered_dot_1_matrix(); break;
                            case ORD_CD2: matrix = get_bayer_clustered_dot_2_matrix(); break;
                            case ORD_CD3: matrix = get_bayer_clustered_dot_3_matrix(); break;
                            case ORD_CD4: matrix = get_bayer_clustered_dot_4_matrix(); break;
                            case ORD_CD5: matrix = get_bayer_clustered_dot_5_matrix(); break;
                            case ORD_CD6: matrix = get_bayer_clustered_dot_6_matrix(); break;
                            case ORD_CD7: matrix = get_bayer_clustered_dot_7_matrix(); break;
                            case ORD_CD8: matrix = get_bayer_clustered_dot_8_matrix(); break;
                            case ORD_CD9: matrix = get_bayer_clustered_dot_9_matrix(); break;
                            case ORD_CDA: matrix = get_bayer_clustered_dot_10_matrix(); break;
                            case ORD_CDB: matrix = get_bayer_clustered_dot_11_matrix(); break;
                            case ORD_CWP: matrix = get_central_white_point_matrix(); break;
                            case ORD_BWP: matrix = get_balanced_centered_point_matrix(); break;
                            case ORD_DIO: matrix = get_diagonal_ordered_matrix_matrix(); break;
                            case ORD_UCD: matrix = get_ulichney_clustered_dot_matrix(); break;
                            case ORD_M5C: matrix = get_magic5x5_circle_matrix(); break;
                            case ORD_MA6: matrix = get_magic6x6_matrix(); break;
                            case ORD_M7C: matrix = get_magic7x7_circle_matrix(); break;
                            case ORD_MA4: matrix = get_magic4x4_matrix(); break;
                            default: break;
                        }
                    }
                    if (matrix != nullptr) {
                        double jitter;
                        if (current_sub_dither_type == ORD_VA2 || current_sub_dither_type == ORD_VA4) {
                            jitter = ui->ORD_VAR_jitter->value();
                        } else if (current_sub_dither_type == ORD_IGR) {
                            jitter = ui->ORD_IGR_jitter->value();
                        } else {
                            jitter = ui->ORD_jitter->value();
                        }
                        ordered_dither(sourceImg, matrix, jitter, out_buf);
                        OrderedDitherMatrix_free(matrix);
                    }
                } break;
                case PAT: {
                    TilePattern *pattern = nullptr;
                    switch(current_sub_dither_type) {
                        case PAT_22A: pattern = get_2x2_pattern(); break;
                        case PAT_33A: pattern = get_3x3_v1_pattern(); break;
                        case PAT_33B: pattern = get_3x3_v2_pattern(); break;
                        case PAT_33C: pattern = get_3x3_v3_pattern(); break;
                        case PAT_44A: pattern = get_4x4_pattern(); break;
                        case PAT_52A: pattern = get_5x2_pattern(); break;
                        default: break;
                    }
                    if (pattern != nullptr) {
                        pattern_dither(sourceImg, pattern, out_buf);
                        TilePattern_free(pattern);
                    }
                } break;
                case RIM: {
                    RiemersmaCurve* curve = nullptr;
                    switch(current_sub_dither_type) {
                        case RIM_HIL: curve = get_hilbert_curve(); break;
                        case RIM_HIM: curve = get_hilbert_mod_curve(); break;
                        case RIM_PEA: curve = get_peano_curve(); break;
                        case RIM_FS0: curve = get_fass0_curve(); break;
                        case RIM_FS1: curve = get_fass1_curve(); break;
                        case RIM_FS2: curve = get_fass2_curve(); break;
                        case RIM_GOS: curve = get_gosper_curve(); break;
                        case RIM_FSS: curve = get_fass_spiral_curve(); break;
                        default: break;
                    }
                    if (curve != nullptr) {
                        bool modRiemersma = ui->RIM_modRiemersma->isChecked();
                        riemersma_dither(sourceImg, curve, modRiemersma, out_buf);
                        RiemersmaCurve_free(curve);
                    }
                } break;
                case VAR: {
                    bool serpentine = ui->VAR_serpentine->isChecked();
                    switch(current_sub_dither_type) {
                        case VAR_OST:
                            variable_error_diffusion_dither(sourceImg, Ostromoukhov, serpentine, out_buf);
                            break;
                        case VAR_ZHF:
                            variable_error_diffusion_dither(sourceImg, Zhoufang, serpentine, out_buf);
                            break;
                        default: break;
                    }
                } break;
                default:
                    break;
            }
            
            // Convert buffer to QImage with custom colors
            ditheredFrame = QImage(w, h, QImage::Format_RGB32);
            QColor color1 = ui->monoColorOneButton->getColor();
            QColor color2 = ui->monoColorTwoButton->getColor();
            
            for (int y = 0; y < h; y++) {
                for (int x = 0; x < w; x++) {
                    int idx = y * w + x;
                    // out_buf contains 0 (black) or 255 (white)
                    // Match the logic from setDitherImageMono:
                    // black (0) -> use monoColorOne (color1)
                    // white (255) -> use monoColorTwo (color2)
                    QRgb color = (out_buf[idx] == 0) ? color1.rgb() : color2.rgb();
                    ditheredFrame.setPixel(x, y, color);
                }
            }
            
            free(out_buf);
        } else {
            // Color dithering
            int w = frame.width();
            int h = frame.height();
            
            // Create a temporary image hash for this frame
            ImageHashColor tempHash;
            tempHash.setSourceImage(&frame);
            
            // Apply the same brightness/contrast/gamma/saturation adjustments
            tempHash.brightness = imageHashColor.brightness;
            tempHash.contrast = imageHashColor.contrast;
            tempHash.gamma = imageHashColor.gamma;
            tempHash.saturation = imageHashColor.saturation;
            
            // IMPORTANT: Apply the adjustments to the source image
            tempHash.adjustSource();
            
            // Allocate output buffer
            int* out_buf = static_cast<int*>(calloc(w * h, sizeof(int)));
            
            // Get the source image (with adjustments applied)
            ColorImage* sourceImg = tempHash.getSourceImage();
            
            // Apply current dither algorithm synchronously
            if (current_dither_type == ERR_C) {
                // Error diffusion color
                ErrorDiffusionMatrix* matrix = nullptr;
                switch(current_sub_dither_type) {
                    case ERR_XOT_C: matrix = get_xot_matrix(); break;
                    case ERR_DIA_C: matrix = get_diagonal_matrix(); break;
                    case ERR_FYD_C: matrix = get_floyd_steinberg_matrix(); break;
                    case ERR_SF3_C: matrix = get_shiaufan3_matrix(); break;
                    case ERR_SF2_C: matrix = get_shiaufan2_matrix(); break;
                    case ERR_SF1_C: matrix = get_shiaufan1_matrix(); break;
                    case ERR_STK_C: matrix = get_stucki_matrix(); break;
                    case ERR_D1D_C: matrix = get_diffusion_1d_matrix(); break;
                    case ERR_D2D_C: matrix = get_diffusion_2d_matrix(); break;
                    case ERR_FFS_C: matrix = get_fake_floyd_steinberg_matrix(); break;
                    case ERR_JJN_C: matrix = get_jarvis_judice_ninke_matrix(); break;
                    case ERR_ATK_C: matrix = get_atkinson_matrix(); break;
                    case ERR_BRK_C: matrix = get_burkes_matrix(); break;
                    case ERR_SI3_C: matrix = get_sierra_3_matrix(); break;
                    case ERR_SI2_C: matrix = get_sierra_2row_matrix(); break;
                    case ERR_SIL_C: matrix = get_sierra_lite_matrix(); break;
                    case ERR_SPG_C: matrix = get_steve_pigeon_matrix(); break;
                    case ERR_RKI_C: matrix = get_robert_kist_matrix(); break;
                    case ERR_SSA_C: matrix = get_stevenson_arce_matrix(); break;
                    default: break;
                }
                if (matrix != nullptr) {
                    bool serpentine = ui->ERR_C_serpentine->isChecked();
                    error_diffusion_dither_color(sourceImg, matrix, cachedPalette, serpentine, out_buf);
                    ErrorDiffusionMatrix_free(matrix);
                }
            } else if (current_dither_type == ORD_C) {
                // Ordered dithering color
                OrderedDitherMatrix* matrix = nullptr;
                switch(current_sub_dither_type) {
                    case ORD_BLU_C: matrix = get_blue_noise_128x128(); break;
                    case ORD_BA2_C: matrix = get_bayer2x2_matrix(); break;
                    case ORD_BA3_C: matrix = get_bayer3x3_matrix(); break;
                    case ORD_BA4_C: matrix = get_bayer4x4_matrix(); break;
                    case ORD_BA8_C: matrix = get_bayer8x8_matrix(); break;
                    case ORD_B16_C: matrix = get_bayer16x16_matrix(); break;
                    case ORD_B32_C: matrix = get_bayer32x32_matrix(); break;
                    case ORD_DD1_C: matrix = get_dispersed_dots_1_matrix(); break;
                    case ORD_DD2_C: matrix = get_dispersed_dots_2_matrix(); break;
                    case ORD_VDD_C: matrix = get_ulichney_void_dispersed_dots_matrix(); break;
                    case ORD_NR1_C: matrix = get_non_rectangular_1_matrix(); break;
                    case ORD_NR2_C: matrix = get_non_rectangular_2_matrix(); break;
                    case ORD_NR3_C: matrix = get_non_rectangular_3_matrix(); break;
                    case ORD_NR4_C: matrix = get_non_rectangular_4_matrix(); break;
                    case ORD_ULY_C: matrix = get_ulichney_matrix(); break;
                    case ORD_UB5_C: matrix = get_ulichney_bayer_5_matrix(); break;
                    case ORD_CD1_C: matrix = get_bayer_clustered_dot_1_matrix(); break;
                    case ORD_CD2_C: matrix = get_bayer_clustered_dot_2_matrix(); break;
                    case ORD_CD3_C: matrix = get_bayer_clustered_dot_3_matrix(); break;
                    case ORD_CD4_C: matrix = get_bayer_clustered_dot_4_matrix(); break;
                    case ORD_CD5_C: matrix = get_bayer_clustered_dot_5_matrix(); break;
                    case ORD_CD6_C: matrix = get_bayer_clustered_dot_6_matrix(); break;
                    case ORD_CD7_C: matrix = get_bayer_clustered_dot_7_matrix(); break;
                    case ORD_CD8_C: matrix = get_bayer_clustered_dot_8_matrix(); break;
                    case ORD_CD9_C: matrix = get_bayer_clustered_dot_9_matrix(); break;
                    case ORD_CDA_C: matrix = get_bayer_clustered_dot_10_matrix(); break;
                    case ORD_CDB_C: matrix = get_bayer_clustered_dot_11_matrix(); break;
                    case ORD_CWP_C: matrix = get_central_white_point_matrix(); break;
                    case ORD_BWP_C: matrix = get_balanced_centered_point_matrix(); break;
                    case ORD_DIO_C: matrix = get_diagonal_ordered_matrix_matrix(); break;
                    case ORD_UCD_C: matrix = get_ulichney_clustered_dot_matrix(); break;
                    case ORD_M5C_C: matrix = get_magic5x5_circle_matrix(); break;
                    case ORD_MA6_C: matrix = get_magic6x6_matrix(); break;
                    case ORD_M7C_C: matrix = get_magic7x7_circle_matrix(); break;
                    case ORD_MA4_C: matrix = get_magic4x4_matrix(); break;
                    case ORD_VA2_C: {
                        int step = ui->ORD_VAR_C_step->value();
                        matrix = get_variable_2x2_matrix(step);
                    } break;
                    case ORD_VA4_C: {
                        int step = ui->ORD_VAR_C_step->value();
                        matrix = get_variable_4x4_matrix(step);
                    } break;
                    case ORD_IGR_C: {
                        int step = ui->ORD_IGR_C_step->value();
                        double a = ui->ORD_IGR_C_a->value();
                        double b = ui->ORD_IGR_C_b->value();
                        double c = ui->ORD_IGR_C_c->value();
                        matrix = get_interleaved_gradient_noise(step, a, b, c);
                    } break;
                    default: break;
                }
                if (matrix != nullptr) {
                    ordered_dither_color(sourceImg, cachedPalette, matrix, out_buf);
                    OrderedDitherMatrix_free(matrix);
                }
            }
            
            // Convert buffer to QImage using current palette
            ditheredFrame = QImage(w, h, QImage::Format_RGB32);
            BytePalette* palette = cachedPalette->target_palette;
            for (int y = 0; y < h; y++) {
                for (int x = 0; x < w; x++) {
                    int idx = y * w + x;
                    int colorIdx = out_buf[idx];
                    if (colorIdx >= 0 && colorIdx < static_cast<int>(palette->size)) {
                        ByteColor* color = BytePalette_get(palette, colorIdx);
                        ditheredFrame.setPixel(x, y, qRgb(color->r, color->g, color->b));
                    }
                }
            }
            
            free(out_buf);
        }
        
        return ditheredFrame;
    };
    
    // Start processing
    dialog->show();
    processor->processVideo(currentVideoPath, outputPath, ditherCallback);
}

void MainWindow::fileOpenVideoSlot() {
    /* opens file dialog for loading a video file */
    QString fileName;
    if (fileManager.getOpenVideoName(&fileName)) {
        loadVideoSlot(fileName);
    }
}

void MainWindow::videoFrameChangedSlot(int frameNumber) {
    /* user moved the timeline slider to view a different frame */
    
    if (currentVideoPath.isEmpty()) {
        return;
    }
    
    // Calculate time in seconds for this frame
    double timeSeconds = 0.0;
    if (videoFps > 0) {
        timeSeconds = frameNumber / videoFps;
    }
    
    // Extract the requested frame
    VideoProcessor* processor = new VideoProcessor(this);
    QImage frame = processor->extractSingleFrame(currentVideoPath, timeSeconds);
    delete processor;
    
    if (!frame.isNull()) {
        // Update the frame without resetting UI state
        updateVideoFrame(&frame);
    }
}

void MainWindow::updateVideoFrame(const QImage* image) {
    /* Update video frame without resetting the entire UI state */
    
    if(image->width() * image->height() > IMAGE_MAX_SIZE) {
        return;
    }
    
    // Update resolution label
    ui->resolutionLabel->setText(QString("%1 \u00D7 %2").arg(image->width()).arg(image->height()));
    
    // Update the current tab's image hash and re-apply current dithering
    if (ui->imageSettingsStackedWidget->currentIndex() == 0) {
        // Mono tab - save current adjustment values
        double brightness = imageHashMono.brightness;
        double contrast = imageHashMono.contrast;
        double gamma = imageHashMono.gamma;
        
        // Update source image
        imageHashMono.setSourceImage(image);
        
        // Restore adjustment values
        imageHashMono.brightness = brightness;
        imageHashMono.contrast = contrast;
        imageHashMono.gamma = gamma;
        
        // Apply adjustments and update view
        ui->graphicsView->setSourceImageMono(imageHashMono.getSourceQImage());
        adjustImageMono();
        
    } else {
        // Color tab - save current adjustment values
        double brightness = imageHashColor.brightness;
        double contrast = imageHashColor.contrast;
        double gamma = imageHashColor.gamma;
        double saturation = imageHashColor.saturation;
        
        // Update source image
        imageHashColor.setSourceImage(image);
        
        // Restore adjustment values
        imageHashColor.brightness = brightness;
        imageHashColor.contrast = contrast;
        imageHashColor.gamma = gamma;
        imageHashColor.saturation = saturation;
        
        // Apply adjustments and update view
        ui->graphicsView->setSourceImageColor(imageHashColor.getSourceQImage());
        adjustImageColor();
    }
}

