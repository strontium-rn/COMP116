#include<iostream>
using namespace std;

const double PI=3.14;

class circle{
    private: 
        int radius; 
    public:
        circle(int r): radius(r){
        } 
        double computeArea(){
            return PI*radius*radius;
        }       
        void display(){
            cout<<"The area of circle is: "<<computeArea()<<endl;
        }
        

}; 
int main(){
   

    circle obj(5);
    obj.display();
    return 0;
}