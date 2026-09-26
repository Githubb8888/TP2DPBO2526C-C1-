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
