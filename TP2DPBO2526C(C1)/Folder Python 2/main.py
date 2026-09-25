class Benua:
    def __init__(self, nama_benua, luas_benua, zona_waktu_utama):
        self.nama_benua = nama_benua
        self.luas_benua = luas_benua
        self.zona_waktu_utama = zona_waktu_utama

class Negara(Benua):
    def __init__(self, nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang):
        super().__init__(nama_benua, luas_benua, zona_waktu_utama)
        self.nama_negara = nama_negara
        self.bahasa_resmi = bahasa_resmi
        self.mata_uang = mata_uang

class Kota(Negara):
    def __init__(self, nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang, nama_kota, jumlah_penduduk, ikon_kota):
        super().__init__(nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang)
        self.nama_kota = nama_kota
        self.jumlah_penduduk = jumlah_penduduk
        self.ikon_kota = ikon_kota

    def print_row(self):
        print(f"{self.nama_benua:<18} {self.luas_benua:<15} {self.zona_waktu_utama:<15} {self.nama_negara:<15} {self.bahasa_resmi:<15} {self.mata_uang:<15} {self.nama_kota:<18} {self.jumlah_penduduk:<18} {self.ikon_kota:<20}")

daftar_kota = [
    Kota("Asia", 44500000, "UTC+3", "Russia", "Russian", "Ruble", "Moscow", 13000000, "Kremlin"),
    Kota("Europe", 10180000, "UTC+0", "UK", "English", "Pound", "London", 9000000, "BigBen"),
    Kota("NorthAmerica", 24709000, "UTC-5", "Canada", "English", "Dollar", "Toronto", 3000000, "CNTower"),
    Kota("SouthAmerica", 17840000, "UTC-3", "Brazil", "Portuguese", "Real", "RioDeJaneiro", 6700000, "ChristRedeemer"),
    Kota("Australia", 7692024, "UTC+10", "Australia", "English", "Dollar", "Sydney", 5000000, "SydneyOpera")
]

n = int(input())
for _ in range(n):
    data = input().split()
    daftar_kota.append(Kota(data[0], int(data[1]), data[2], data[3], data[4], data[5], data[6], int(data[7]), data[8]))

print(f"{'Continent':<18} {'Area':<15} {'Timezone':<15} {'Country':<15} {'Language':<15} {'Currency':<15} {'City':<18} {'Population':<18} {'Landmark':<20}")
print("-" * 148)
for kota in daftar_kota:
    kota.print_row()