import cv2

# Nama peserta yang akan ditampilkan
nama_peserta = "Ferdy Alfalah"

# Buka kamera (0 = kamera utama laptop)
kamera = cv2.VideoCapture(0)

# Cek apakah kamera berhasil dibuka
if not kamera.isOpened():
    print("Kamera tidak bisa dibuka!")
    exit()

while True:
    # Ambil 1 frame dari kamera
    ret, frame = kamera.read()
    
    # Jika gagal ambil frame, keluar
    if not ret:
        print("Gagal membaca frame!")
        break

    # Tambahkan teks nama di frame
    cv2.putText(frame, f"Nama: {nama_peserta}", (20, 40),
                cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

    # Tampilkan frame ke layar
    cv2.imshow("Kamera - Tekan 'q' untuk keluar", frame)

    # Jika tombol 'q' ditekan, keluar dari loop
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Lepaskan kamera dan tutup semua jendela
kamera.release()
cv2.destroyAllWindows()
