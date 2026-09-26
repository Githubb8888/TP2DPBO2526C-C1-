<?php
require_once 'Benua.php';

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
