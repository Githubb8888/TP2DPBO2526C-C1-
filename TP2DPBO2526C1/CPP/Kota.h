#ifndef KOTA_H
#define KOTA_H

#include "Negara.h"
#include <iostream>
#include <iomanip>

class Kota : public Negara {
private:
    string nama_kota;
    long long jumlah_penduduk;
    string ikon_kota;
public:
    Kota(string nb, long long lb, string zvu, string nn, string br, string mu, string nk, long long jp, string ik)
        : Negara(nb, lb, zvu, nn, br, mu), nama_kota(nk), jumlah_penduduk(jp), ikon_kota(ik) {}

    void printRow() {
        cout << left << setw(18) << nama_benua << setw(15) << luas_benua << setw(15) << zona_waktu_utama
             << setw(15) << nama_negara << setw(15) << bahasa_resmi << setw(15) << mata_uang
             << setw(18) << nama_kota << setw(18) << jumlah_penduduk << setw(20) << ikon_kota << "\n";
    }
};

#endif
