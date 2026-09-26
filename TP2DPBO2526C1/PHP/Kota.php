<?php
require_once 'Negara.php';

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
