// deklarasi kelas ram
public class Ram{
    // variabel privat
    private String capacity;
    private int price;
    // method public dan konstruktor
    public Ram(){

    }
    public Ram(String capacity, int price){
        this.capacity=capacity;
        this.price=price;
    }
    // get dans set semua variabel
    public String getcapacity(){
        return capacity;
    }
    public void setcapacity(String capacity){
        this.capacity = capacity;
    }
    public int getprice(){
        return price;
    }
    public void setprice(int price){
        this.price = price;
    }
}