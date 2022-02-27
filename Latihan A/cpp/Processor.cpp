// Library
#include <iostream>
#include <string>
using namespace std;
// deklarasi kelas
class Processor{
    // variabel private
    private:
        string name;
        int price;
    // variabel dan method publik
    public:
        // konstruktor
        Processor(){

        }
        Processor(string name, int price){
            this->name = name;
            this->price = price;
        }
        // get dan set
        void setname(string name){
            this->name = name;
        }
        string getname(){
            return this->name;
        }
        void setprice(int price){
            this->price = price;
        }
        int getprice(){
            return this->price;
        }
        // destruktor
        ~Processor(){}
};
