<?php
class Benua {
    protected $nama_benua;
    protected $luas_benua;
    protected $zona_waktu_utama;

    public function __construct($nb, $lb, $zvu) {
        $this->nama_benua = $nb;
        $this->luas_benua = $lb;
        $this->zona_waktu_utama = $zvu;
    }
}

class Negara extends Benua {
    protected $nama_negara;
    protected $bahasa_resmi;
    protected $mata_uang;

    public function __construct($nb, $lb, $zvu, $nn, $br, $mu) {
        parent::__construct($nb, $lb, $zvu);
        $this->nama_negara = $nn;
        $this->bahasa_resmi = $br;
        $this->mata_uang = $mu;
    }
}

class Kota extends Negara {
    private $nama_kota;
    private $jumlah_penduduk;
    private $ikon_kota;
    private $foto_produk;

    public function __construct($nb, $lb, $zvu, $nn, $br, $mu, $nk, $jp, $ik, $foto) {
        parent::__construct($nb, $lb, $zvu, $nn, $br, $mu);
        $this->nama_kota = $nk;
        $this->jumlah_penduduk = $jp;
        $this->ikon_kota = $ik;
        $this->foto_produk = $foto;
    }

    public function getRowHTML() {
        return "<tr>
            <td>{$this->nama_benua}</td>
            <td>{$this->luas_benua}</td>
            <td>{$this->zona_waktu_utama}</td>
            <td>{$this->nama_negara}</td>
            <td>{$this->bahasa_resmi}</td>
            <td>{$this->mata_uang}</td>
            <td>{$this->nama_kota}</td>
            <td>{$this->jumlah_penduduk}</td>
            <td>{$this->ikon_kota}</td>
            <td><img src='{$this->foto_produk}' width='100' alt='foto'></td>
        </tr>";
    }
}

$daftarKota = [
    new Kota("Asia", 44500000, "UTC+3", "Russia", "Russian", "Ruble", "Moscow", 13000000, "Kremlin", "kremlin.jpeg"),
    new Kota("Europe", 10180000, "UTC+0", "UK", "English", "Pound", "London", 9000000, "BigBen", "bigban.jpeg"),
    new Kota("NorthAmerica", 24709000, "UTC-5", "Canada", "English", "Dollar", "Toronto", 3000000, "CNTower", "cnttower.jpeg"),
    new Kota("SouthAmerica", 17840000, "UTC-3", "Brazil", "Portuguese", "Real", "RioDeJaneiro", 6700000, "ChristRedeemer", "brazil.jpeg"),
    new Kota("Australia", 7692024, "UTC+10", "Australia", "English", "Dollar", "Sydney", 5000000, "SydneyOpera", "sydneyopera.jpeg")
];
?>

<!DOCTYPE html>
<html>
<head><title>World Cities Information Table</title></head>
<body>
    <table border="1" cellpadding="10" cellspacing="0">
        <tr>
            <th>Continent</th><th>Area</th><th>Timezone</th><th>Country</th><th>Language</th>
            <th>Currency</th><th>City</th><th>Population</th><th>Landmark</th><th>City Photo</th>
        </tr>
        <?php
        foreach ($daftarKota as $kota) {
            echo $kota->getRowHTML();
        }
        ?>
    </table>
</body>
</html>