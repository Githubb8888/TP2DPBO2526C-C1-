#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include "Kota.h"

using namespace std;

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
