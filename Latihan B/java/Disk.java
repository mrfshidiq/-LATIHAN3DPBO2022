// deklarasi kelas disk
public class Disk{
    // variabel privat
    private String type;
    private String capacity;
    private int price;
    // method public dan konstruktor
    public Disk(){

    }
    public Disk(String type, String capacity, int price){
        this.type=type;
        this.capacity=capacity;
        this.price=price;
    }
    // get dans set semua variabel
    public String gettype(){
        return type;
    }
    public void settype(String type){
        this.type = type;
    }
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