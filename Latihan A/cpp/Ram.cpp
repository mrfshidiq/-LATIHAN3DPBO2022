// Library
#include <iostream>
#include <string>
using namespace std;
// deklarasi kelas
class Ram{
    // variabel private
    private:
        string capacity;
        int price;
    // variabel dan method publik
    public:
        // konstruktor
        Ram(){

        }
        Ram(string capacity, int price){
            this->capacity = capacity;
            this->price = price;
        }
        // get dan set
        void setcapacity(string capacity){
            this->capacity = capacity;
        }
        string getcapacity(){
            return this->capacity;
        }
        void setprice(int price){
            this->price = price;
        }
        // method tampilkan
        int getprice(){
            return this->price;
        }
        // destruktor
        ~Ram(){}
};