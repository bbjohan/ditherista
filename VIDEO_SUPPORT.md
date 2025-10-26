# Supporto Video per Ditherista

## Panoramica

Ditherista ora supporta l'elaborazione di file video! Puoi applicare qualsiasi effetto dithering disponibile per le immagini anche ai tuoi video.

## Requisiti

Per elaborare i video, è necessario che **FFmpeg** sia installato sul sistema e disponibile nel PATH.

### Installazione FFmpeg

#### Windows
1. Scarica FFmpeg da https://ffmpeg.org/download.html
2. Estrai l'archivio
3. Aggiungi la cartella `bin` al PATH di sistema

#### Linux (Ubuntu/Debian)
```bash
sudo apt install ffmpeg
```

#### macOS
```bash
brew install ffmpeg
```

## Come Usare

### Aprire un Video

Hai tre modi per caricare un video:

1. **Menu File → Open Video...** (Ctrl+Shift+O / Cmd+Shift+O su macOS)
2. **Drag & Drop**: Trascina un file video direttamente nella finestra di Ditherista
3. Formati supportati: MP4, AVI, MOV, MKV, WEBM

### Elaborare un Video

1. Prima di aprire il video, seleziona l'effetto dithering desiderato dalla lista (mono o color)
2. Configura tutti i parametri dell'effetto (serpentine, jitter, palette, ecc.)
3. Apri il video tramite menu o drag & drop
4. Scegli dove salvare il video elaborato
5. Attendi che l'elaborazione sia completata

Durante l'elaborazione vedrai:
- Una finestra di progresso con preview dei frame
- Il numero di frame corrente e totale
- Una barra di avanzamento percentuale

### Note Importanti

- **L'elaborazione può richiedere tempo**: Un video di 1 minuto a 30fps contiene 1800 frame. Ogni frame viene elaborato individualmente.
- **Qualità**: Il video viene esportato in formato H.264 con alta qualità (CRF 18)
- **Impostazioni**: Assicurati di configurare l'effetto dithering PRIMA di aprire il video. Le impostazioni attive al momento dell'apertura verranno applicate a tutti i frame.
- **Memoria**: Video ad alta risoluzione possono richiedere molta memoria durante l'elaborazione.
- **Cancellazione**: Puoi annullare l'elaborazione in qualsiasi momento cliccando "Cancel" nella finestra di progresso.

## Esempi di Tempo di Elaborazione

Tempi approssimativi su un sistema medio:

- Video 720p, 30fps, 10 secondi (~300 frame): 2-5 minuti
- Video 1080p, 30fps, 10 secondi (~300 frame): 5-10 minuti
- Video 4K, 30fps, 10 secondi (~300 frame): 15-30 minuti

I tempi variano in base a:
- Risoluzione del video
- Complessità dell'algoritmo di dithering (DBS è molto più lento di Bayer)
- Potenza del processore

## Suggerimenti

1. **Testa prima su immagini**: Prova l'effetto su un singolo frame (screenshot) prima di elaborare un video intero
2. **Inizia con video brevi**: Testa su clip di pochi secondi per vedere il risultato
3. **Algoritmi veloci**: Bayer, Pattern e Ordered dithering sono molto più veloci di DBS o Allebach
4. **Riduci risoluzione**: Se il tempo di elaborazione è troppo lungo, considera di ridurre la risoluzione del video prima

## Troubleshooting

### "FFmpeg not found"
- Assicurati che FFmpeg sia installato
- Verifica che sia nel PATH eseguendo `ffmpeg -version` nel terminale

### Video non si apre
- Verifica che il formato sia supportato
- Prova a convertire il video in MP4 con FFmpeg

### Elaborazione lenta
- Usa algoritmi di dithering più veloci
- Riduci la risoluzione del video
- Elabora clip più brevi

### Memoria insufficiente
- Chiudi altre applicazioni
- Riduci la risoluzione del video
- Elabora video più corti

## Limitazioni Attuali

- Non viene preservato l'audio (solo video)
- Frame rate fisso (quello del video originale)
- Non è possibile modificare i parametri durante l'elaborazione
- Le dimensioni massime sono 4096x4096 pixel per frame
