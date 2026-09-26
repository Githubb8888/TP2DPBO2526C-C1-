from negara import Negara


class Kota(Negara):
    def __init__(self, nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang,
                 nama_kota, jumlah_penduduk, ikon_kota):
        super().__init__(nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang)
        self.nama_kota = nama_kota
        self.jumlah_penduduk = jumlah_penduduk
        self.ikon_kota = ikon_kota

    def print_row(self):
        print(f"{self.nama_benua:<18} {self.luas_benua:<15} {self.zona_waktu_utama:<15} "
              f"{self.nama_negara:<15} {self.bahasa_resmi:<15} {self.mata_uang:<15} "
              f"{self.nama_kota:<18} {self.jumlah_penduduk:<18} {self.ikon_kota:<20}")
