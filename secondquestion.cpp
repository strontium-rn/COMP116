// Define a base class Employee with a virtual function calculateSalary(). 
// Create derived classes HourlyEmployee and CommissionEmployee that override this function. 
// Write a program to calculate and display salaries based on employment type.
#include<iostream>
#include<string>

using namespace std;

class Employee{
    protected:
        string name;
        int id;
    public:
        Employee(){}
        
        void setDetails(string n, int i){
            name = n;
            id = i;
        }
        virtual double calculateSalary(){
            return 0;
        }
        void display(){
            cout<<"Name: \n"<<name;
            cout<<"Id: \n"<<id;
            cout<<"Total Salary: \n"<<calculateSalary();
        }
};

class HourlyEmployee: public Employee{
    private:
        int hoursWorked;
        double hoursRate;
    public:
        void setHourlyRate(int hw, double hr){
            hoursWorked = hw;
            hoursRate = hr;
        }
        virtual double calcuateSalary(){
            return hoursWorked*hoursRate;
        }

};
class ComissionEmployee: public Employee{
    private:
        int baseSalary;
        double comissionRate;
        int sales;
    public:
        void setComissionEmployee(int bs, double cr, int s){
            baseSalary = bs;
            comissionRate = cr;
            sales = s;
        }
        virtual double calculateSalary(){
            return baseSalary + (sales*comissionRate);
        }
};
int main(){
    HourlyEmployee emp1;
    emp1.setHourlyRate(8,1500);
    emp1.setDetails("Aarya", 22510923);
    emp1.display();

    ComissionEmployee emp2;
    emp2.setComissionEmployee(30000, 7.8, 92);
    emp2.setDetails("Poshak", 298424334);
    emp2.display();
    
    return 0;
}