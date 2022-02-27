// deklarasi kelas procssor
public class Processor{
    // variabel privat
    private String name;
    private int price;
    // method public dan konstruktor
    public Processor(){

    }
    public Processor(String name, int price){
        this.name=name;
        this.price=price;
    }
    // get dans set semua variabel
    public String getname(){
        return name;
    }
    public void setname(String name){
        this.name = name;
    }
    public int getprice(){
        return price;
    }
    public void setprice(int price){
        this.price = price;
    }
}