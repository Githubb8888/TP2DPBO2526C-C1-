<?php
require_once 'Kota.php';

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
