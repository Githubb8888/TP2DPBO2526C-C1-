#ifndef BENUA_H
#define BENUA_H

#include <string>
using namespace std;

class Benua {
protected:
    string nama_benua;
    long long luas_benua;
    string zona_waktu_utama;
public:
    Benua(string nb, long long lb, string zvu) : nama_benua(nb), luas_benua(lb), zona_waktu_utama(zvu) {}
};

#endif
