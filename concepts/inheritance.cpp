// Create a class called Polygon with two data members: numberOfSides, and centroid
// and two member functions: display() that displays the values of member variables, and move() that
// translates the Polygon object to a new location.
// Create two other classes Triangle and Rectangle inheriting from Polygon class. Add
// relevant data members and member functions in these classes.

#include<iostream>
using namespace std;

class Polygon{
    public:
    int numberOfSides;
    int centroid;

    void display(){
        cout<<"Number of sides is:"<<numberOfSides<<" and the centroid is: "<<centroid;
    }
    void move(int newLocation){
        centroid = newLocation;
        cout<<"New moved location is: "<<centroid<<endl;
    }
};

class Triangle: public Polygon{
    public:
    int side1, side2, side3;

    Triangle(int s1, int s2, int s3, int centroid){
        numberOfSides=3;
        int side1=s1;
        int side2=s2;
        int side3=s3;
        this -> centroid = centroid;
    }
    void display(){
        Polygon::display();
        cout<<"side 1="<<side1<<"Side2 = "<<side2<<"Side 3= "<<side3;
    }
};
class Rectangle: public Polygon{
    public:
    int length,breadth;

    Rectangle(int l, int b, int centroid){
        numberOfSides = 2;
        int length = l;
        int breadth = b;
        this -> centroid = centroid;
    }
    void display(){
        Polygon::display();
        cout<<"lenght= "<<length<<"breadth= "<<breadth;
    }
};

int main(){
    Triangle tri(3,4,5,10);
    tri.display();
    tri.move(5);

    Rectangle rec(3,4,9);
    rec.display();
    rec.move(7);
    return 0;
}