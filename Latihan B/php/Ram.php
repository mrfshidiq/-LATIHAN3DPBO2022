<?php
// deklarasi kelas
class Ram{
	//variabel lokal
	private $capacity;
    private $price;
	//konstruktor
	public function __construct($capacity = "", $price = 0){
		$this->price = $price;
        $this->capacity = $capacity;
	}
	//get dan set setiap variabel
	public function setprice($price){
		$this->price = $price;
	}
	public function getprice(){
		return $this->price;
	}
	public function setcapacity($capacity){
		$this->capacity = $capacity;
	}
	public function getcapacity(){
		return $this->capacity;
	}
	// destruktor
	public function __destruct(){
	}
}
?>