// Library dan kelas
#include <iostream>
#include <string>
using namespace std;
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"
// deklarasi kelas
class Pc{
    // variabel dan objek private
    private:
        Processor Pcproc;
        Disk Pcdisk;
        Ram Pcram;
        int totalprice;
    // variabel dan method publik
    public:
        // konstruktor
        Pc(){

        }
        Pc(Processor Pcproc, Disk Pcdisk, Ram Pcram){
            this->Pcproc = Pcproc;
            this->Pcdisk = Pcdisk;
            this->Pcram = Pcram;
            this->totalprice = Pcproc.getprice() + Pcdisk.getprice() + Pcram.getprice();
        }
        // get dan set
        void setPcproc(Processor Pcproc){
            this->Pcproc = Pcproc;
        }
        Processor getPcproc(){
            return this->Pcproc;
        }
        void setPcram(Ram Pcram){
            this->Pcram = Pcram;
        }
        Ram getPcram(){
            return this->Pcram;
        }
        void setPcdisk(Disk Pcdisk){
            this->Pcdisk = Pcdisk;
        }
        Disk getPcdisk(){
            return this->Pcdisk;
        }
        // method tampilkan
        void printpc(){
            cout << "Spesifikasi PC: " << endl;
            cout << "Processor: " << this->Pcproc.getname()  << endl;
            cout << "Processor Price: " << this->Pcproc.getprice()  << endl;
            cout << "Disk Type: " << this->Pcdisk.gettype()  << endl;
            cout << "Disk Capacity: " << this->Pcdisk.getcapacity()  << endl;
            cout << "Disk Price: " << this->Pcdisk.getprice()  << endl;
            cout << "Ram Capacity: " << this->Pcram.getcapacity()  << endl;
            cout << "Ram Price: " << this->Pcram.getprice()  << endl;
            cout << "Total Price: " << this->totalprice  << endl;
        }
        // destruktor
        ~Pc(){}
};