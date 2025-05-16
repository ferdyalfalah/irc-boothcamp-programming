# IRC-boothcamp-programming

## profile

- **Name:** Ferdy Alfalah
- **Program Studi:** Ilmu Komputer
- **Fakultas:** Sekolah Sains Data Matematika dan Informatika
- **Universitas:** IPB University 
- **Email:** <337954ferdy@apps.ipb.ac.id>

## About Me

- 👋 Hi, u can call me Ferdy  
- 👀 I’m interested in 🤖 robotics, 💻 technology, 🎮 games, 📚 self-development books   
- 🌱 I’m currently learning Arduino, C/C++, Python, Git, and how to build cool projects 🚀    
- 💞️ I’m looking to collaborate on tech projects, especially in robotics and game development 🤝 
- 📫 How to reach me: [@ferdyyalf](https://instagram.com/ferdyyalf) | [WhatsApp](https://wa.me/6282111787628)
- 😄 Pronouns: he/him
- ⚡ Fun fact: Weekend mode: gaming 🎮, YouTube watching (mostly game videos) 🍿, professional level rebahan 🛌, and frequent hibernation 🦥—will update when I decide to be productive 😴  


---


## 💻 Resume Bootcamp #2 - Divisi Programming  

### 🧠 Pengenalan Divisi Pemrograman

Divisi pemrograman adalah tim yang bertugas untuk **memberikan "otak" pada robot**. Tugas utama divisi ini meliputi:
- Mengendalikan gerakan robot  
- Memproses data dari sensor  
- Membuat keputusan cerdas berdasarkan input yang diterima

---

### ⚙️ Pembagian Divisi Programming

#### 🔹 Programming VTOL (Drone)
Divisi ini bertugas memprogram drone agar dapat bergerak dan menyelesaikan misi, seperti:
- Mengambil pilot
- Melewati berbagai rintangan secara otonom

**Tools & Software yang digunakan:**
- Python  
- Roboflow  
- Mission Planner  
- Tolo  
- DroneKit  

#### 🔸 Programming Transporter
Divisi ini berfokus pada pemrograman robot transporter berbentuk mobil-mobilan yang dikendalikan menggunakan:
- Remote PS3
- Remote custom buatan sendiri

**Bahasa & Tools yang digunakan:**
- C / C++  
- Arduino Uno  
- PlatformIO  
- Wokwi  

#### 🖥️ Ground Control Station (GCS)
Divisi ini menggunakan **Mission Planner**, sebuah software untuk:
- Merencanakan misi penerbangan
- Mengatur titik waypoint
- Memantau status drone secara real-time

---

### 🧩 Keterampilan Teknis yang Dibutuhkan

Seorang programmer di IRC perlu menguasai beberapa keterampilan teknis, antara lain:

- **Bahasa Pemrograman:** C/C++, Python
- **Sensor & Aktuator:** Motor, servo, sensor IR, dll.
- **Komunikasi:** UART, I2C, SPI, Bluetooth/Wi-Fi
- **Mikrokontroler:** Arduino, ESP32, dan lainnya

> 💡 Keterampilan ini adalah fondasi penting dalam merancang sistem robotika.

---

### 🔁 Flowchart & Pseudocode

Sebelum menulis program, kita perlu memahami **alur logika program** melalui _flowchart_ dan _pseudocode_.

#### 🔄 Flowchart
Flowchart adalah **representasi visual dari algoritma** yang menggunakan simbol-simbol standar untuk menjelaskan alur proses. Flowchart membantu:
- Menjelaskan logika program ke orang lain
- Mempermudah dokumentasi dan debugging

**Contoh simbol flowchart:**
- ⬛ Terminator: Menandakan awal/akhir proses
- 🔷 Decision: Pengambilan keputusan (if/else)
- 🔲 Process: Proses/eksekusi instruksi

#### 📝 Pseudocode
Pseudocode adalah **deskripsi algoritma dalam bentuk semi-bahasa pemrograman** yang tidak bergantung pada sintaks tertentu. Biasanya ditemukan di buku teks atau materi pembelajaran, contohnya:
```plaintext
For i ← 1 to n:
    Do something
```

---

### Data Types & Variable

| Fitur             | Arduino (C/C++)                                 | Python                                   |
|------------------|--------------------------------------------------|------------------------------------------|
| Tipe Data         | Harus dideklarasikan (int, float, char, dll)    | Otomatis ditentukan (int, float, str)    |
| Deklarasi         | `int ledPin = 13;`                               | `ledPin = 13`                             |
| Skop              | Global atau lokal                                | Global atau lokal                         |
| Sintaks           | Ketat,  tipe data eksplisit                      | Fleksibel dan sederhana                   |

---

### Arithmetic Operators

| Operator | Fungsi       | Contoh     |
|----------|--------------|------------|
| `+`      | Penjumlahan  | `5 + 3 = 8`|
| `-`      | Pengurangan  | `5 - 3 = 2`|
| `*`      | Perkalian    | `5 * 3 = 15`|
| `/`      | Pembagian    | `5 / 2 = 2.5`|
| `%`      | Modulo       | `5 % 2 = 1`|

---

### Comparison Operators

| Operator | Fungsi              | Contoh        |
|----------|---------------------|---------------|
| `==`     | Sama dengan         | `5 == 5` → `True` |
| `!=`     | Tidak sama dengan   | `5 != 3` → `True` |
| `>`      | Lebih besar         | `5 > 3` → `True` |
| `<`      | Lebih kecil         | `5 < 3` → `False` |
| `>=`     | Lebih besar sama    | `5 >= 5` → `True` |
| `<=`     | Lebih kecil sama    | `3 <= 5` → `True` |

---

### Boolean Operators

| Operator | Fungsi       | Contoh                    |
|----------|--------------|---------------------------|
| `and`    | Dan          | `True and False` → `False` |
| `or`     | Atau         | `True or False` → `True`   |
| `not`    | Negasi       | `not True` → `False`       |

---

### Control Statements

| S.NO. | Control Statement & Description |
|-------|----------------------------------|
| **1** | **If statement**<br>It takes an expression in parenthesis and a statement or block of statements. If the expression is true then the statement or block of statements gets executed otherwise these statements are skipped. |
| **2** | **If ...else statement**<br>An if statement can be followed by an optional else statement, which executes when the expression is false. |
| **3** | **If...else if ...else statement**<br>The if statement can be followed by an optional else if...else statement, which is very useful to test various conditions using single if...else if statement. |
| **4** | **switch case statement**<br>Similar to the if statements, switch...case controls the flow of programs by allowing the programmers to specify different codes that should be executed in various conditions. |
| **5** | **Conditional Operator ? :**<br>The conditional operator ? : is the only ternary operator in C. |

---

### 🛠️ Toolchain yang Digunakan

Toolchain adalah kumpulan software/alat yang mendukung proses pemrograman dan pengembangan sistem. Berikut adalah beberapa tools yang biasa digunakan:
| Tool             | Deskripsi                                                                |
| ---------------- | ------------------------------------------------------------------------ |
| **Arduino IDE**  | IDE resmi untuk pemrograman board Arduino                                |
| **PlatformIO**   | Ekstensi berbasis Visual Studio Code untuk pengembangan mikrokontroler   |
| **Wokwi**        | Simulator online untuk Arduino dan mikrokontroler lainnya                |
| **VS Code**      | Code editor serbaguna, mendukung banyak bahasa dengan ekstensi tambahan  |
| **Google Colab** | Notebook online untuk Python, cocok untuk eksperimen dan pembelajaran AI |
| **PyCharm**      | IDE khusus untuk Python yang dikembangkan oleh JetBrains                 |
| **Roboflow**     | Platform untuk mengelola dan melatih dataset visual (computer vision)    |
> 📌 *Catatan: Tidak ada software yang paling "terbaik", namun ada software yang lebih **tepat guna** sesuai dengan kebutuhan proyek tertentu.*

---

### 🌐 Penggunaan GitHub

**GitHub** adalah platform berbasis cloud untuk menyimpan, mengelola, dan berkolaborasi dalam proyek perangkat lunak. GitHub memudahkan pengembang dalam bekerja secara tim maupun individu.

#### 📁 Repository
Repository merupakan tempat penyimpanan utama proyek, yang berisi:
- Kode program
- Dokumentasi (README, LICENSE, dll.)
- File konfigurasi dan aset lainnya

#### 🕒 Commit History
Setiap perubahan dalam repository dicatat dalam bentuk **commit**, sehingga:
- Riwayat perubahan dapat ditelusuri
- Versi sebelumnya bisa dipulihkan jika dibutuhkan
- Progres pengembangan bisa didokumentasikan dengan baik

#### 🔄 Pull Request
Pull Request (PR) adalah cara untuk:
- Mengajukan perubahan terhadap repository utama
- Mendiskusikan dan meninjau kode sebelum digabungkan (merge)
- Kolaborasi antar kontributor dalam pengembangan fitur

> ✨ GitHub tidak hanya untuk menyimpan kode, tapi juga untuk belajar kolaborasi, dokumentasi, dan pengembangan perangkat lunak secara profesional.

---

### 🔌 Pengenalan Embedded System

**Embedded system** adalah sistem komputer khusus yang dirancang untuk menjalankan satu atau beberapa fungsi tertentu dalam suatu perangkat. Dalam konteks robotika, embedded system sangat krusial sebagai “otak” pengendali.

#### 🔹 Arduino Uno
- Mikrokontroler murah dan mudah digunakan
- Cocok untuk pemula
- Tidak memiliki fitur komunikasi seperti Wi-Fi atau Bluetooth
- Didukung oleh banyak sumber referensi dan komunitas

#### 🔹 ESP32
- Mikrokontroler lebih canggih dari Arduino Uno
- Memiliki fitur Wi-Fi dan Bluetooth
- Ideal untuk proyek-proyek IoT dan sistem berbasis jaringan

#### 🔹 STM32
- Mikrokontroler performa tinggi
- Digunakan untuk aplikasi dengan kebutuhan proses yang kompleks
- Membutuhkan pemahaman teknis lebih lanjut

#### 🔹 Raspberry Pi
- Komputer mini dengan sistem operasi sendiri (biasanya berbasis Linux)
- Memiliki port I/O lengkap dan dapat menjalankan banyak program sekaligus
- Ideal untuk sistem otonom skala besar, namun membutuhkan pemahaman sistem operasi dan pemrograman lanjutan

> 💡 Pemilihan jenis mikrokontroler tergantung pada kebutuhan proyek. Tidak semua aplikasi membutuhkan board paling canggih—yang terpenting adalah **kecocokan dengan tugas dan efisiensi penggunaan**.

---
---

## Penjelasan Kode Arduino/ESP32

### Program Arduino: Sensor Ultrasonik dan servo

Program ini menggunakan **sensor ultrasonik HC-SR04** untuk mengukur jarak benda di depannya. Jika jarak benda tersebut **kurang dari 40 cm**, maka Arduino akan:

- **Menyalakan kipas** (atau LED sebagai pengganti kipas),
- **Menggerakkan motor servo** dari sudut 0° ke 180°, lalu kembali ke 0°, secara terus-menerus selama benda masih berada dalam jarak dekat.

#### 💡 **Cara Kerja Program**

##### 1. **Inisialisasi:**
Arduino menyiapkan semua pin yang dibutuhkan, termasuk pin untuk sensor ultrasonik, kipas, dan servo. Ini dilakukan di dalam fungsi `setup()`. 

##### 2. **Pengukuran Jarak:**
Dalam proses `loop()` (yang berjalan terus-menerus), sensor ultrasonik mengirimkan gelombang suara, dan Arduino mengukur waktu pantulan gelombang tersebut. Waktu pantulan ini digunakan untuk menghitung **jarak objek** yang terdeteksi di depan sensor.

##### 3. **Pengaturan Servo:**
- Jika jarak objek **kurang dari 40 cm**, maka kipas akan **menyala** dan servo akan mulai **bergerak bolak-balik**.
  - Servo bergerak dari sudut **0° ke 180°**, lalu kembali dari **180° ke 0°**.
  - Gerakan ini akan terus diulang selama objek masih berada dalam jarak dekat.
  
- Setelah setiap gerakan servo, sensor akan **memperbarui jaraknya**. Jika objek tetap dekat, servo akan terus bergerak. 
- Jika objek sudah menjauh (jaraknya lebih dari atau sama dengan 40 cm), maka kipas akan dimatikan dan servo berhenti bergerak.

#### 🧠 **Ringkasan Alur Program:**

1. **Sensor mengukur jarak**.
2. Jika **jarak < 40 cm**:
   - Kipas **nyala**.
   - Servo **bergerak bolak-balik**.
3. Jika **jarak ≥ 40 cm**:
   - Kipas **mati**.
   - Servo **berhenti**.

#### 🎯 **Aplikasi Program:**
Program ini bisa digunakan sebagai simulasi untuk sistem otomatis sederhana seperti:
- Penyemprot otomatis,
- Pembuka pintu otomatis,
- Alat interaktif yang merespon gerakan.

#### 🔧 **Cara Menjalankan Program:**

1. **Buka Arduino IDE**.
2. **Salin kode** ke dalam Arduino IDE.
3. Sambungkan **sensor ultrasonik**, **servo**, dan **kipas** ke pin yang sesuai.
4. Pilih **Board Arduino** dan **Port** yang sesuai.
5. Klik **Upload** untuk memuat kode ke papan Arduino.

#### ⚡ **Sumber Daya yang Dibutuhkan:**

- Arduino Uno (atau papan Arduino lain)
- Sensor Ultrasonik HC-SR04
- Motor Servo
- Kipas atau LED
- Kabel Jumper

---

### Program Arduino: Kontrol LED Bergantian

Program ini mengontrol 5 pin digital pada Arduino untuk menyalakan dan mematikan perangkat (seperti LED) yang terhubung ke pin tersebut secara bergantian. Setiap pin menyala selama 1 detik dan mati selama 1 detik.

#### 💡 **Tujuan Program**

- **Menyalakan dan mematikan perangkat (seperti LED)** yang terhubung ke pin digital 8, 9, 10, 11, dan 12 secara bergantian.
- Setiap pin akan menyala selama **1 detik** dan mati selama **1 detik**.
- Program ini akan terus berjalan dan mengulangi proses ini secara **berulang** tanpa henti.

#### 🧠 **Penjelasan Program**

##### 1. **Inisialisasi Pin**
Di dalam fungsi `setup()`, program mengatur pin-pin digital 8, 9, 10, 11, dan 12 sebagai **OUTPUT**. Ini berarti Arduino akan mengirimkan sinyal untuk mengendalikan perangkat yang terhubung ke pin-pinn tersebut, seperti LED.

##### 2. **Pengaturan Pin dalam `loop()`**
Pada bagian `loop()`, program menyalakan dan mematikan pin-pin tersebut satu per satu. Prosesnya adalah sebagai berikut:
- Pin dinyalakan selama **1 detik** (`HIGH`).
- Setelah itu, pin dimatikan selama **1 detik** (`LOW`).
- Proses ini diulang untuk pin 8, kemudian pin 9, pin 10, pin 11, dan pin 12.

##### 3. **Proses Berulang**
Seluruh proses dalam `loop()` akan berjalan terus menerus selama Arduino menyala. Pin-pin tersebut akan menyala dan mati secara bergantian tanpa henti karena `loop()` akan mengulang terus.

#### 🔄 **Alur Program**

1. Pin 8 menyala selama 1 detik, lalu mati selama 1 detik.
2. Pin 9 menyala selama 1 detik, lalu mati, diikuti dengan pin 10, 11, dan 12.
3. Proses ini akan **berulang terus menerus** karena berada dalam fungsi `loop()`.

#### 🎯 **Kesimpulan**

- Program ini mengendalikan 5 pin digital pada Arduino untuk menyala dan mati secara bergantian.
- Setiap pin menyala selama **1 detik** dan mati selama **1 detik**.
- Program ini **berjalan terus-menerus** karena berada dalam fungsi `loop()`, yang membuatnya berulang tanpa henti.

#### 🔧 **Cara Menjalankan Program**

1. **Buka Arduino IDE**.
2. **Salin kode** ke dalam Arduino IDE.
3. Sambungkan **LED** atau perangkat lain ke pin digital 8, 9, 10, 11, dan 12.
4. Pilih **Board Arduino** dan **Port** yang sesuai.
5. Klik **Upload** untuk memuat kode ke papan Arduino.

#### ⚡ **Sumber Daya yang Dibutuhkan:**

- Arduino Uno (atau papan Arduino lain)
- 5 LED (atau perangkat lain)
- Kabel Jumper

---

## Link Wokwi

**LED :** [LED](https://wokwi.com/projects/430756666435171329)

**Servo :** [Servo](https://wokwi.com/projects/430760569470584833)

---
---

## Kamera Real-Time dengan Nama Peserta menggunakan Python & OpenCV

Program sederhana ini menggunakan Python dan OpenCV untuk mengakses kamera laptop, menampilkan video secara langsung, sekaligus menampilkan nama peserta di layar.

### Fitur Utama

- Mengaktifkan kamera laptop secara real-time  
- Menampilkan video langsung di jendela aplikasi  
- Menambahkan teks nama peserta di atas video  
- Keluar dari program dengan menekan tombol `q`  
- Menutup kamera dan jendela dengan rapi saat selesai  

### Cara Kerja Program

1. **Membuka Kamera**  
   Program memulai dengan membuka kamera utama laptop dan memastikan kamera dapat diakses dengan benar.

2. **Pengambilan Gambar Berkelanjutan**  
   Program kemudian masuk ke dalam loop yang mengambil gambar secara terus-menerus dari kamera.

3. **Menambahkan Teks pada Video**  
   Setiap gambar yang diambil diberi teks berupa nama peserta di posisi yang telah ditentukan agar mudah terlihat.

4. **Menampilkan Video**  
   Gambar dengan teks kemudian ditampilkan secara real-time di sebuah jendela aplikasi.

5. **Mekanisme Keluar**  
   Program terus berjalan hingga pengguna menekan tombol `q` pada keyboard, yang akan menghentikan loop pengambilan gambar.

6. **Penutupan Kamera dan Jendela**  
   Setelah loop berhenti, program melepaskan kamera dan menutup semua jendela yang terbuka secara bersih dan rapi.
