// create a class with a static data member which can store information
//  about the total number of objects created. Write a well driven program
#include<iostream>
using namespace std;

class MyClass{
    private:
        static int objectcount;
    public:
        MyClass(){
            objectcount++;
        }
        static int getObjectCount(){
            return objectcount;
        }
};
int MyClass::objectcount=0;
int main(){
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout<<"Total object created: "<<MyClass::getObjectCount()<<endl;

    return 0;
}