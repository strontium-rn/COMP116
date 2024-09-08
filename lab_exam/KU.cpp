// Define a class Person with attributes like name, age, and address. 
// Derive two classes Student and Professor from Person. 
// In Student, include attributes like studentID, course, and grades.
// In Professor, include employeeID, subject, and salary. 
// Implement functions to calculate the GPA for students and the salary for professors 
#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
    public:
        Person(){}
        void setInfo(string n, int ag, string ad){
            name = n;
            age = ag;
            address = ad;
        }
        virtual double gpa(){
            return 0;
        }
        virtual double calculateSalary(){
            return 0;
        }
        void display(){
            cout<<"Name:"<<name;
            cout<<"Age:"<<age;
            cout<<"Address:"<<address;                  
        }
};
class Student: public Person{
    private:
        int studentID;
        string course;
        int percentage;
    public:
        void setInfoStu(int si, string cr, int pr){
            studentID = si;
            course = cr;
            percentage = pr;
        }
        double gpa()override{
            return percentage/25.0;
        }
        virtual void display(){
            Person::display();
            cout<<"GPA of student is:"<<gpa()<<endl;
        }
};

class Professor: public Person{
    private:
        int employeeId;
        int salary;
        string subject;
        int noOfClass;
        int perClass;
    public:
        void setInfoProf(int ei, string su, int ns, int ps){
            employeeId = ei;
            subject = su;
            noOfClass = ns;
            perClass = ps;
        }
        double calculateSalary()override{
            return noOfClass * perClass; 
        }
        virtual void display(){
            Person::display();
            cout<<"Salary of Professor is:"<<calculateSalary()<<endl;
        }
};

int main(){
    Student s;
    
    s.setInfo("Aarya", 19, "Kathmandu");
    s.setInfoStu(23, "CS", 78);
    s.display();

    Professor p;
    
    p.setInfo("Tamrakar",58, "Zoo");
    p.setInfoProf(4323, "COMP116", 22, 3000);
    p.display();

    return 0;
}