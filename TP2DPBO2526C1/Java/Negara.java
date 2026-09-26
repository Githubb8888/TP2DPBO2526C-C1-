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
