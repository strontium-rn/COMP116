// Create a base class Vehicle with attributes brand and model, and a derived class Car 
// with an additional attribute numberOfDoors.
// Implement a virtual function displayInfo() that displays vehicle details, and override it in the Car class.
#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    private:
        string brand;
        int modelNum;
    public:
        Vehicle(){}

        void setInfo(string b, int m){
            brand = b;
            modelNum = m;
        }

        virtual void displayInfo(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Model number: "<<modelNum<<endl;
        }
};
class Car: public Vehicle{
    private:
        int numberOfDoors;
    public:
        void setDoors(int doors){
            numberOfDoors = doors;
        }
        virtual void displayInfo(){
            Vehicle::displayInfo();
            cout<<"Number of doors: "<<numberOfDoors<<endl;
        }
};

int main(){
    Car c;
    c.setDoors(4);
    c.setInfo("Mercedes", 223023);
    c.displayInfo();
    return 0;
}