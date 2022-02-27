// deklarasi kelas pc
public class Pc{
    // variabel private dan redefinisi kelas lain
    private Disk o_disk;
    private Processor o_proc;
    private Ram o_ram;
    private int totalprice;
    // method public dan konstruktor
    public Pc(){

    }
    public Pc(Disk disk, Processor proc, Ram ram){
        o_disk=disk;
        o_proc=proc;
        o_ram=ram;
        this.totalprice= disk.getprice() + proc.getprice() + ram.getprice();;
    }
    // get dans set semua variabel
    public Disk geto_disk(){
        return o_disk;
    }
    public void seto_disk(Disk disk){
        o_disk = disk;
    }
    public Ram geto_ram(){
        return o_ram;
    }
    public void seto_ram(Ram ram){
        o_ram = ram;
    }
    public Processor geto_proc(){
        return o_proc;
    }
    public void seto_proc(Processor proc){
        o_proc = proc;
    }
    public int gettotalprice(){
        return totalprice;
    }
    public void settotalprice(int totalprice){
        this.totalprice = totalprice;
    }
    // method untuk print
    public void printpc(){
        System.out.println("Processor Name : " + this.o_proc.getname());
        System.out.println("Processor Price : " + this.o_proc.getprice());
        System.out.println("Disk Type : " + this.o_disk.gettype());
        System.out.println("Disk Capacity : " + this.o_disk.getcapacity());
        System.out.println("Disk Price : " + this.o_disk.getprice());
        System.out.println("Ram Capacity : " + this.o_ram.getcapacity());
        System.out.println("Ram Price : " + this.o_ram.getprice());
        System.out.println("Total Price : " + this.totalprice);
    }
}