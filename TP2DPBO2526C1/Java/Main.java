import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Kota> daftarKota = new ArrayList<>();
        daftarKota.add(new Kota("Asia", 44500000, "UTC+3", "Russia", "Russian", "Ruble", "Moscow", 13000000, "Kremlin"));
        daftarKota.add(new Kota("Europe", 10180000, "UTC+0", "UK", "English", "Pound", "London", 9000000, "BigBen"));
        daftarKota.add(new Kota("NorthAmerica", 24709000, "UTC-5", "Canada", "English", "Dollar", "Toronto", 3000000, "CNTower"));
        daftarKota.add(new Kota("SouthAmerica", 17840000, "UTC-3", "Brazil", "Portuguese", "Real", "RioDeJaneiro", 6700000, "ChristRedeemer"));
        daftarKota.add(new Kota("Australia", 7692024, "UTC+10", "Australia", "English", "Dollar", "Sydney", 5000000, "SydneyOpera"));

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            String nb = scanner.next();
            long lb = scanner.nextLong();
            String zvu = scanner.next();
            String nn = scanner.next();
            String br = scanner.next();
            String mu = scanner.next();
            String nk = scanner.next();
            long jp = scanner.nextLong();
            String ik = scanner.next();
            daftarKota.add(new Kota(nb, lb, zvu, nn, br, mu, nk, jp, ik));
        }

        System.out.printf("%-18s %-15s %-15s %-15s %-15s %-15s %-18s %-18s %-20s\n", 
            "Continent", "Area", "Timezone", "Country", "Language", "Currency", "City", "Population", "Landmark");
        System.out.println("-".repeat(148));
        
        for (Kota kota : daftarKota) {
            kota.printRow();
        }
        scanner.close();
    }
}
