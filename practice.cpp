#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;
    public:
        Complex(int r=0, int i=0){
            real = r;
            img = i;
        }
    Complex operator+(Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void display(){
         cout<<real<<"+"<< img<<"i";
    };
};
int main(){
    Complex c1, c2(10,5), c3(3,4);
    c1 = c2+c3;
    c1.display();
}