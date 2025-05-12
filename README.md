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





