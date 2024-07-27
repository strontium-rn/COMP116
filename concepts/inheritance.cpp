// Create a class called Polygon with two data members: numberOfSides, and centroid
// and two member functions: display() that displays the values of member variables, and move() that
// translates the Polygon object to a new location.
// Create two other classes Triangle and Rectangle inheriting from Polygon class. Add
// relevant data members and member functions in these classes.

#include<iostream>
using namespace std;

class Point{
    public:
    int x, y;
    Point(int x=0, int y=0): x(x), y(y) {}
};

class Polygon{
    public:
    int numberOfSides;
    Point centroid;    
    Polygon(int side, Point center): numberOfSides(side), centroid(center){}//constructors

    void display(){
        cout<<"Number of sides and centroid coordinates is:"<<numberOfSides centroid <<endl;
    }
    void move(int newX, int newY){
        cout<<"New x and y coordinates are:"<<newX, newY<<endl;
    }
};
