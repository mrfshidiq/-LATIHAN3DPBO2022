<?php
// include objek/kelas
include "Ram.php";
include "Processor.php";
include "Disk.php";
include "Pc.php";
// deklarasi objek
$oram = new Ram("32GB", 2200000);
$oproc = new Processor("AMD Ryzen 5 3600", 3000000);
$odisk = new Disk("512GB", "SSD", 1200000);
// menghitung totalprice
$tprice = (int)$oproc->getprice() + (int)$oram->getprice() + (int)$odisk->getprice();
$opc = new Pc($oproc, $odisk, $oram, $tprice);
// tampilkan
$opc->print();
?>