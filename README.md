Tugas Praktikum 2 DPBO - Multilevel Inheritance

Janji
Saya Bozorov Husein dengan NIM 2521812 mengerjakan evaluasi Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

Design Diagram

The diagram image is at Dokumentasi/diagram_inheritance.png

Benua is the base class and holds nama_benua, luas_benua, and zona_waktu_utama. Negara extends Benua and adds nama_negara, bahasa_resmi, and mata_uang. Kota extends Negara and adds nama_kota, jumlah_penduduk, ikon_kota, and foto_produk, where foto_produk exists only in the PHP version. So the chain is Benua at the top, Negara in the middle, and Kota at the bottom, each one extending the class above it.

Attribute and Method Explanation

Benua class holds nama_benua, the name of the continent, luas_benua, the total area of the continent in square kilometers, and zona_waktu_utama, the primary timezone of the region. Its constructor initializes these three base attributes.

Negara class extends Benua and adds nama_negara, the name of the country, bahasa_resmi, the official language spoken, and mata_uang, the currency used. Its constructor initializes these attributes and calls the parent constructor to set up the Benua attributes as well.

Kota class extends Negara and adds nama_kota, the name of the city, jumlah_penduduk, the total population, ikon_kota, the landmark or symbol of the city, and foto_produk, which only exists in the PHP version and stores the filename of the city photo. Kota also has printRow in C++ and Java, print_row in Python, and getRowHTML in PHP, and all of them print or return every attribute from Benua, Negara, and Kota together in a single row of the table.

Program Flow

When the program runs, it automatically creates five default Kota objects that are hardcoded: Asia and Moscow in Russia, Europe and London in the UK, North America and Toronto in Canada, South America and Rio de Janeiro in Brazil, and Australia and Sydney in Australia.

For C++, Java, and Python only, the program then asks the user for an integer n, which is how many extra entries they want to add.

The program loops n times and reads the attributes for each new entry in order, and each new entry becomes a new Kota object added to the list.

Once all the input is done, the program prints the table header.

The program then goes through every object in the list and calls the row printing method so all the attributes from every object are shown together in one dynamic table.

PHP does not take any user input, since it is hardcoded as allowed by the assignment, and instead displays the table as a web page that also shows each city's photo through foto_produk.

How to Run

C++ can be run by going into the CPP folder and running g++ main.cpp -o main followed by ./main and feeding it testcase.txt as input.

Python can be run by going into the Python folder and running python3 main.py and feeding it testcase.txt as input.

Java can be run by going into the Java folder and running javac Main.java then java Main and feeding it testcase.txt as input.

PHP can be run by going into the PHP folder and running php -S localhost:8000 and then opening index.php in the browser.

Documentation

Screenshots of each language's output are inside the Dokumentasi folder. C++ output is cpp_output.png, Python output is python_output.png, Java output is java_output.png, and PHP output is php_output.png, and the diagram image is diagram_inheritance.png.
