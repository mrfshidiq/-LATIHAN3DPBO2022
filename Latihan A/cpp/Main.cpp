// Library
#include <string>
using namespace std;
// Call object
#include "Pc.cpp"
int main(){
    // Isi setiap objek
    Processor proc1("AMD Ryzen 5 3600", 3000000);
    Disk disk1("SSD", "256GB", 750000);
    Ram ram1("16GB", 1300000);
    Pc pc1(proc1, disk1, ram1);
    // Tampilkan
    pc1.printpc();
}