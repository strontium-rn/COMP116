/* Public
#include<iostream>
using namespace std;
const double PI=3.14;

class Circle{
    public:
        double radius;

        double compute_area(){
            return PI * radius * radius;
        }
};

int main(){
    Circle obj;
    obj.radius = 5.5;
    
    cout<<"The radius is: "<<obj.radius<<endl;
    cout<<"The area of circle is: "<<obj.compute_area()<<endl;
    return 0;
}*/
//Private
#include<iostream>
using namespace std;
const double PI = 3.14;

class circle{
    private: 
        double radius;
    public:
        void setter(double r){
            radius = r;
        }
        
        double computeArea(){
            return PI * radius * radius;
        }
        void display(){
            cout<<"The area of circle is: "<<computeArea()<<endl;
        }
};
int main(){
    circle obj;
    double r;
    cout<<"Enter the raidus:"<<endl;
    cin>>r;
    obj.setter(r);
    obj.display();
    return 0;
}