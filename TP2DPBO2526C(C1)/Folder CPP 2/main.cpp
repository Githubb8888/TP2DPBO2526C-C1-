#include <iostream>
#include <vector>
#include <iomanip>
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

class Negara : public Benua {
protected:
    string nama_negara;
    string bahasa_resmi;
    string mata_uang;
public:
    Negara(string nb, long long lb, string zvu, string nn, string br, string mu) 
        : Benua(nb, lb, zvu), nama_negara(nn), bahasa_resmi(br), mata_uang(mu) {}
};

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

int main() {
    vector<Kota> daftarKota = {
        Kota("Asia", 44500000, "UTC+3", "Russia", "Russian", "Ruble", "Moscow", 13000000, "Kremlin"),
        Kota("Europe", 10180000, "UTC+0", "UK", "English", "Pound", "London", 9000000, "BigBen"),
        Kota("NorthAmerica", 24709000, "UTC-5", "Canada", "English", "Dollar", "Toronto", 3000000, "CNTower"),
        Kota("SouthAmerica", 17840000, "UTC-3", "Brazil", "Portuguese", "Real", "RioDeJaneiro", 6700000, "ChristRedeemer"),
        Kota("Australia", 7692024, "UTC+10", "Australia", "English", "Dollar", "Sydney", 5000000, "SydneyOpera")
    };

    int n;
    if (!(cin >> n)) return 0;
    string dummy;
    getline(cin, dummy); 

    for (int i = 0; i < n; i++) {
        string nb, zvu, nn, br, mu, nk, ik;
        long long lb, jp;
        
        getline(cin, nb);
        cin >> lb;
        cin.ignore();
        getline(cin, zvu);
        getline(cin, nn);
        getline(cin, br);
        getline(cin, mu);
        getline(cin, nk);
        cin >> jp;
        cin.ignore();
        getline(cin, ik);

        daftarKota.push_back(Kota(nb, lb, zvu, nn, br, mu, nk, jp, ik));
    }

    cout << "\n" << left << setw(18) << "Continent" << setw(15) << "Area" << setw(15) << "Timezone" 
         << setw(15) << "Country" << setw(15) << "Language" << setw(15) << "Currency" 
         << setw(18) << "City" << setw(18) << "Population" << setw(20) << "Landmark" << "\n";
    cout << string(148, '-') << "\n";

    for (auto& kota : daftarKota) {
        kota.printRow();
    }

    return 0;
}