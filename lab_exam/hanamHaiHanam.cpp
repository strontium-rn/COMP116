// Define a class Person with attributes like name, age, and address. 
// Derive two classes Student and Professor from Person. 
// In Student, include attributes like studentID, course, and grades.
// In Professor, include employeeID, subject, and salary. 
// Implement functions to calculate the GPA for students and the salary for professors 
#include<iostream>
using namespace std;
#include<string>
class Person{
    private:
        string name;
        int age;
        string address;
    public:
        Person(){}
        void setInfo(string na, int ag, string ad){
            name=na;
            age=ag;
            address=ad;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;             
        }
        virtual float calculateGPA(){
            return 0;
        }
        virtual int calculateSalary(){
            return 0;
        }
};
class Student: public Person{
    private:
        int studentID;
        string course;
        int percentage;
    public:
        Student(){}
        void setInfoStu(int si, string co,int pr){
            studentID=si;
            course=co;
            percentage = pr;
        }
       float calculateGPA() override{
            return (percentage)/25.0;
        }
        virtual void display(){
            Person::display();
            cout<<"GPA: "<<calculateGPA()<<endl;
        }
};
class Professor: public Person{
    private:
        int employeeID;
        string subject;
        int salary;
        int noOfclass;
        int perClass;
    public:
        Professor(){}
        void setInfoProf(int ei, string su, int no, int pe){
            employeeID=ei;
            subject=su;
            noOfclass=no;
            perClass=pe;
        }
        int calculateSalary()override{
            return noOfclass * perClass;
        }
        virtual void display(){
                Person::display();
                cout<<"Salary: "<<calculateSalary()<<endl;
        }
};

int main(){
    Student s;
    s.setInfo("Aarya", 19, "Kathmandu");
    s.setInfoStu(2252, "CS", 87);
    s.display();

    Professor p;
    p.setInfo("Tamrakar", 58, "Zoo");
    p.setInfoProf(82442, "OOP", 30, 2500);
    p.display();

    return 0;
}