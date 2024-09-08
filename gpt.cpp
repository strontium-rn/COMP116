#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // Base class function
        cout << "Base class show" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Overridden function in derived class
        cout << "Derived class show" << endl;
    }
};

int main() {
    Base* obj = new Derived();  // Pointer to base class, object of derived class
    obj->show();  // Calls the overridden function in the derived class
}
