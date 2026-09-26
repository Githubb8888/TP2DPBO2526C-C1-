import java.util.ArrayList;
import java.util.Scanner;

class Benua {
    protected String nama_benua;
    protected long luas_benua;
    protected String zona_waktu_utama;

    public Benua(String nb, long lb, String zvu) {
        this.nama_benua = nb;
        this.luas_benua = lb;
        this.zona_waktu_utama = zvu;
    }
}

class Negara extends Benua {
    protected String nama_negara;
    protected String bahasa_resmi;
    protected String mata_uang;

    public Negara(String nb, long lb, String zvu, String nn, String br, String mu) {
        super(nb, lb, zvu);
        this.nama_negara = nn;
        this.bahasa_resmi = br;
        this.mata_uang = mu;
    }
}

class Kota extends Negara {
    private String nama_kota;
    private long jumlah_penduduk;
    private String ikon_kota;

    public Kota(String nb, long lb, String zvu, String nn, String br, String mu, String nk, long jp, String ik) {
        super(nb, lb, zvu, nn, br, mu);
        this.nama_kota = nk;
        this.jumlah_penduduk = jp;
        this.ikon_kota = ik;
    }

    public void printRow() {
        System.out.printf("%-18s %-15d %-15s %-15s %-15s %-15s %-18s %-18d %-20s\n", 
            nama_benua, luas_benua, zona_waktu_utama, nama_negara, bahasa_resmi, mata_uang, nama_kota, jumlah_penduduk, ikon_kota);
    }
}

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