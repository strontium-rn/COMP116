// describe a scenario where operator overloading using member function
// cannot solve a case that can be solved by operator overloading using friend function
/* member functions are built in such a way that they cannot handel the scalar value on the left hand side of the operator
to overcome this issue, we use friend function, which is not restricted to the left hand side operand of the operator*/

#include<iostream>
using namespace std;

class myclass{
    private:
        int value;
    public:
        myclass(int v=0):value(v){}

        friend myclass operator+(int v, const myclass &obj);
        void display()const{
            cout<<value<<endl;
        }
        myclass operator+(int v) const {
            return myclass(value + v);
}
};

myclass operator+(int v, const myclass &obj){
    return myclass(v+obj.value);
}
int main(){
    myclass obj(10);
    myclass result1 = obj + 5;
    result1.display();

    myclass result2 = 5 + obj;
    result2.display();
    return 0;

}