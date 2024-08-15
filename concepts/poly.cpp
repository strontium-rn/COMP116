#include<iostream>
using namespace std;

class Shape{
    public:
    double side1;
    double side2;

    Shape(double s1, double s2): side1(s1),side2(s2){}
    
    void setData(double s1, double s2){
        side1 = s1;
        side2 = s2;
    }

    virtual void displayArea(){
        cout<<"Base class displayArea() function";
    }
};

class Rectangle: public Shape{
    public:
    Rectangle(double s1,double s2): Shape(s1,s2){}
    void displayArea(){
        cout<<"Area of rectangle is: \n"<<side1*side2;
    }
};

class Triangle: public Shape{
    public:
    Triangle(double s1, double s2): Shape(s1,s2){}
    void displayArea(){
        cout<<"Area of triangle is: "<<0.5*side1*side2;
    }
};

int main(){
    double side1,side2;
    cout<<"Enter two sides: "<<endl;
    cin>>side1>>side2;
    Shape* sh;
    sh = new Triangle(side1,side2);
    sh -> displayArea();
    sh = new Rectangle(side1,side2);
    sh -> displayArea();
    return 0;
}