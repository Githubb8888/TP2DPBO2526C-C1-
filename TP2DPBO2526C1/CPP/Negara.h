#ifndef NEGARA_H
#define NEGARA_H

#include "Benua.h"

class Negara : public Benua {
protected:
    string nama_negara;
    string bahasa_resmi;
    string mata_uang;
public:
    Negara(string nb, long long lb, string zvu, string nn, string br, string mu)
        : Benua(nb, lb, zvu), nama_negara(nn), bahasa_resmi(br), mata_uang(mu) {}
};

#endif
