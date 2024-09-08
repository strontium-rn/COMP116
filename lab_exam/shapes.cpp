// Create a class called Polygon with two data members: numberOfSides, and centroid
// (a Point object, you may use the Point class from previous lectures) and two member
// functions: display() that displays the values of member variables, and move() that
// translates the Polygon object to a new location.
// Create two other classes Triangle and Rectangle inheriting from Polygon class. Add
// relevant data members and member functions in these classes. 

#include<iostream>
using namespace std;
#include<string>

class Point{
    public:
        int x,y;
        Point(int x_val=0,int  y_val=0): x(x_val), y(y_val) {}
};

class Polygon{
    private:
        int numberOfSides;
        Point centroid;
    public:
        Polygon() : numberOfSides(0), centroid(Point()){}
        void setInfo(int ns, Point ce){
            numberOfSides=ns;
            centroid=ce;
        }
        void display(){
            cout<<"Number of sides is: "<<numberOfSides;
            cout<<"Centroid: ("<<centroid.x<<","<<centroid.y<<")"<<endl;
        }
        void move(Point newCentroid) {
            centroid = newCentroid;
            cout << "Polygon moved to new centroid: (" << centroid.x << ", " << centroid.y << ")" << endl;
        }
};
class Triangle : public Polygon{
    private:
        int base;
        int height;
    public:
        Triangle() : base(0), height(0) {}
        void setInfoTri(int b, int h){
            base=b;
            height=h;
        }
        float displayArea(){
            float area =  0.5*base*height;
            cout<<"Area of the triangle: "<<area<<endl;
            return area;
        }
};
class Rectangle : public Polygon{
    private:
        int length;
        int breadth;
    public:
         Rectangle() : length(0), breadth(0) {}
        void setInfoRec(int l, int b){
            length= l;
            breadth = b;
        }
        int displayArea(){
            int area =  length*breadth;
            cout<<"The area of rectangle is: "<<area<<endl;
            return area;

        }
};
        



int main(){
    Triangle t;
    t.setInfoTri(5,4);
    t.setInfo(3,Point(4,5));
    t.display();
    t.displayArea();

    Rectangle r;
    r.setInfoRec(5,4);
    r.setInfo(4, Point(6,3));
    r.display();
    r.displayArea();

    return 0;
}