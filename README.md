Tugas Praktikum 2 DPBO - Multilevel Inheritance

Janji
Saya Bozorov Husein dengan NIM 2521812 mengerjakan evaluasi Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

Design Diagram
Below is the representation of the relationships between classes using the Multilevel Inheritance concept:

Attribute and Method Explanation
Benua Class:
nama_benua: Stores the continent name.
luas_benua: Total area of the continent in square kilometers.
zona_waktu_utama: Primary timezone of the region.
Constructor Method: Initializes the base attributes.

Negara Class:
nama_negara: The name of the country.
bahasa_resmi: Official language spoken.
mata_uang: Currency used in the country.
Constructor Method: Initializes the derived attributes plus the attributes from the Benua class.

Kota Class:
nama_kota: The name of the city.
jumlah_penduduk: Total population count.
ikon_kota: Landmark or symbol of the city.
foto_produk: Exclusive to PHP, stores the filename of the city picture.
printRow() / getRowHTML() Method: Prints all attributes from the three classes into a single dynamic table format.

Program Flow
1. When the program is executed, it automatically initializes 5 default objects of the Kota class (hardcoded) for Asia (Russia/Moscow), Europe (UK/London), North America (Canada/Toronto), South America (Brazil/RioDeJaneiro), and Australia (Australia/Sydney).
2. (For C++, Java, and Python only): The program asks for an integer input n from the user, indicating how many additional data entries to insert.
3. The program loops n times to receive the attribute inputs sequentially. Each new data entry is instantiated as a Kota object.
4. Once all inputs are completed, the program prints the table header.
5. The program iterates over the list of objects and calls the row printer method to display all attributes comprehensively in a single dynamic table.

Documentation
(Add the execution result screenshots for each programming language below)
C++ Output: Dokumentasi/cpp_output.png
Python Output: Dokumentasi/python_output.png
Java Output: Dokumentasi/java_output.png
PHP Output: Dokumentasi/php_output.png
