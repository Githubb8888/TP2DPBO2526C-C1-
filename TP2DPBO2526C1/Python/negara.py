from benua import Benua


class Negara(Benua):
    def __init__(self, nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang):
        super().__init__(nama_benua, luas_benua, zona_waktu_utama)
        self.nama_negara = nama_negara
        self.bahasa_resmi = bahasa_resmi
        self.mata_uang = mata_uang
