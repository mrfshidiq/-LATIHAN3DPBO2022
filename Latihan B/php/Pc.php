<?php
// deklarasi kelas
class Pc{
	//variabel lokal
	private $Processor;
	private $Disk;
    private $Ram;
    private $totalprice;
	//konstruktor
	public function __construct($Processor, $Disk, $Ram, $totalprice){
		$this->Processor = $Processor;
        $this->Disk = $Disk;
        $this->Ram = $Ram;
        $this->totalprice = $totalprice;
	}
	//get dan set setiap variabel
	public function settotalprice($totalprice){
		$this->totalprice = $totalprice;
	}
	public function gettotalprice(){
		return $this->totalprice;
	}
	public function setProcessor($Processor){
		$this->Processor = $Processor;
	}
	public function getProcessor(){
		return $this->Processor;
	}
    public function setRam($Ram){
		$this->Ram = $Ram;
	}
	public function getRam(){
		return $this->Ram;
	}
    public function setDisk($Disk){
		$this->Disk = $Disk;
	}
	public function getDisk(){
		return $this->Disk;
	}
	// fungsi tampilkan
    public function print(){
        echo "Processor Name : ". $this->Processor->getname() ."<br>";
        echo "Processor Price : ". $this->Processor->getprice() ."<br>";
        echo "Disk Type : ". $this->Disk->gettype() ."<br>";
        echo "Disk Capacity : ". $this->Disk->getcapacity() ."<br>";
        echo "Disk Price : ". $this->Disk->getprice() ."<br>";
        echo "Ram Capacity : ". $this->Ram->getcapacity() ."<br>";
        echo "Ram Price : ". $this->Ram->getprice() ."<br>";
        echo "Total Price : ". $this->totalprice ."<br>";
    }
	// destruktor
	public function __destruct(){
	}
}
?>