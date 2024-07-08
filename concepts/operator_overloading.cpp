#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0){
             real = r;
             img = i;
        }
        Complex operator+(Complex const &obj){
            Complex res;
            res.real = real + obj.real;
            res.img = img + obj.img;
            return res;
        }
        void print(){
            cout<<real<<"+ "<<img<<"i"<<endl;
        }

};
int main(){
    Complex c1(5,10), c2(1,11), c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}