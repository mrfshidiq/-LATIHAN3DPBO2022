// Library
#include <iostream>
#include <string>
using namespace std;
// deklarasi kelas
class Disk{
    private:
    // variabel private
        string type;
        string capacity;
        int price;
    // variabel dan method publik
    public:
        // konstruktor
        Disk(){

        }
        Disk(string type, string capacity, int price){
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }
        // get dan set
        void settype(string type){
            this->type = type;
        }
        string gettype(){
            return this->type;
        }
        void setcapacity(string capacity){
            this->capacity = capacity;
        }
        string getcapacity(){
            return this->capacity;
        }
        void setprice(int price){
            this->price = price;
        }
        int getprice(){
            return this->price;
        }
        // destruktor
        ~Disk(){}
};
