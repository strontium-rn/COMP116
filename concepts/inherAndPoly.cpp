//Design a C++ program that demonstrates inheritance using virtual functions to calculate and display
//salaries for a manager and an engineer, with addittional data members and overriden calculateSalary methods in the derived classes.

#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
    int empId;
    string name;

    public:
    Employee(string n, int id): empId(id), name(n){}

    virtual double calculateSalary() = 0;
};

class Manager: public Employee{
    private:
    int baseSalary;
    int bonus;

    public:
    Manager(string n, int id, int bs, int bo): Employee(n,id), baseSalary(bs), bonus(bo){}
    double calculateSalary(){
        return baseSalary+bonus;
    }
};

class Engineer: public Employee{
    private:
    int baseSalary;
    int overtime;

    public:
    Engineer(string n, int id, int bs, int ot): Employee(n, id), baseSalary(bs), overtime(ot){};

    double calculateSalary(){
        return baseSalary+overtime;
    }
};

int main(){
    Employee* e1 = new Manager("Aarya", 116, 50000,5000);
    cout<<"Manager's salary: "<< e1 -> calculateSalary()<<endl;

    Employee* e2 = new Engineer("Koju", 115, 60000, 6000);
    cout<<"Engineer's salary: "<< e2 -> calculateSalary()<<endl;

    return 0;
}