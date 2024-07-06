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
    int r;
    cout<<"Enter the radius:"<<endl;
    cin>>r;

    circle obj(r);
    obj.display();
    return 0;
}