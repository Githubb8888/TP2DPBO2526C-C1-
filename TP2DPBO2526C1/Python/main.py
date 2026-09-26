from kota import Kota

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

print(f"{'Continent':<18} {'Area':<15} {'Timezone':<15} {'Country':<15} {'Language':<15} "
      f"{'Currency':<15} {'City':<18} {'Population':<18} {'Landmark':<20}")
print("-" * 148)
for kota in daftar_kota:
    kota.print_row()
