# Tugas Praktikum 2 DPBO - Multilevel Inheritance

## Janji
Saya Bozorov Husein dengan NIM 2521812 mengerjakan evaluasi Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Design Diagram
[Multilevel Inheritance Diagram](Dokumentasi/diagram_inheritance.png)

## Attribute and Method Explanation

**Benua Class**
- `nama_benua`: Nama benua.
- `luas_benua`: Luas total benua (km²).
- `zona_waktu_utama`: Zona waktu utama wilayah tersebut.
- Constructor: menginisialisasi atribut dasar.

**Negara Class**
- `nama_negara`: Nama negara.
- `bahasa_resmi`: Bahasa resmi yang digunakan.
- `mata_uang`: Mata uang yang digunakan.
- Constructor: menginisialisasi atribut Negara + memanggil constructor Benua (super/parent).

**Kota Class**
- `nama_kota`: Nama kota.
- `jumlah_penduduk`: Total jumlah penduduk.
- `ikon_kota`: Ikon/landmark kota.
- `foto_produk`: **Khusus PHP** — nama file foto kota, ditampilkan di tabel HTML.
- `printRow()` / `print_row()` / `getRowHTML()`: mencetak seluruh atribut dari ketiga class (Benua, Negara, Kota) ke dalam satu baris tabel.

## Program Flow
1. Saat program dijalankan, otomatis membuat 5 objek `Kota` default (hardcoded): Asia/Moscow(Russia), Europe/London(UK), NorthAmerica/Toronto(Canada), SouthAmerica/RioDeJaneiro(Brazil), Australia/Sydney(Australia).
2. **(Khusus C++, Java, Python)**: Program meminta input integer `n` dari user, menunjukkan berapa banyak data tambahan yang akan dimasukkan.
3. Program melakukan looping sebanyak `n` kali untuk menerima input atribut secara berurutan. Setiap data baru diinstansiasi sebagai objek `Kota`.
4. Setelah semua input selesai, program mencetak header tabel.
5. Program melakukan iterasi terhadap seluruh objek dan memanggil method pencetak baris untuk menampilkan seluruh atribut secara lengkap dalam satu tabel dinamis.
6. **PHP** tidak menerima input user (hardcoded sesuai ketentuan), dan menampilkan tabel dalam bentuk halaman web lengkap dengan foto kota (`foto_produk`).

## How to Run
- **C++**: `cd CPP && g++ main.cpp -o main && ./main < testcase.txt`
- **Python**: `cd Python && python3 main.py < testcase.txt`
- **Java**: `cd Java && javac Main.java && java Main < testcase.txt`
- **PHP**: `cd PHP && php -S localhost:8000` then open `http://localhost:8000/index.php`

## Documentation
Screenshots/screen recordings of each language's output are in the `Dokumentasi/` folder:
- C++ Output: `Dokumentasi/cpp_output.png`
- Python Output: `Dokumentasi/python_output.png`
- Java Output: `Dokumentasi/java_output.png`
- PHP Output: `Dokumentasi/php_output.png`
