<?php
// deklarasi kelas
class Processor{
	//variabel lokal
	private $name;
    private $price;
	//konstruktor
	public function __construct($name = "", $price = 0){
		$this->price = $price;
        $this->name = $name;
	}
	//get dan set setiap variabel
	public function setprice($price){
		$this->price = $price;
	}
	public function getprice(){
		return $this->price;
	}
	public function setname($name){
		$this->name = $name;
	}
	public function getname(){
		return $this->name;
	}
	// destruktor
	public function __destruct(){
	}
}
?>