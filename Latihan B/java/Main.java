public class Main {
    public static void main(String[] args){
        // deklarasi objek/kelas dan isi masing-masing variabel
        Processor proc1 = new Processor("AMD Ryzen 3600", 3000000);
        Disk disk1 = new Disk("SSD", "512GB", 1200000);
        Ram ram1 = new Ram("32GB", 2200000);
        Pc pc1 = new Pc(disk1, proc1, ram1);
        // tampilkan
        pc1.printpc();
    }
}