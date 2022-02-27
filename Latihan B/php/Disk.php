<?php
// deklarasi kelas
class Disk{
	//variabel lokal
	private $capacity;
	private $type;
    private $price;
	//konstruktor
	public function __construct($capacity = "", $type = "", $price = 0){
		$this->capacity = $capacity;
        $this->type = $type;
        $this->price = $price;
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
    public function settype($type){
		$this->type = $type;
	}
	public function gettype(){
		return $this->type;
	}
	// destruktor
	public function __destruct(){
	}
}
?>