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
