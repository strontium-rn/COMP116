// implement a class to represent a date in YYYY, MM, and DD format, along
//  with an operator overloading function to calculate a person's age at a given date
#include<iostream>
using namespace std;

class Date{
    private:
        int year;
        int month;
        int day;
    public:
        Date(int yyyy, int mm, int dd): year(yyyy), month(mm), day(dd){}
        int operator-(const Date &obj){
            return year - obj.year;
        }
    void display(){
        cout<<"year-month-day"<<year<<month<<day<<endl;
    }
};
int main(){
    Date birthdate(2005,5,6);
    Date currentdate(2024,9,8);

    int age = currentdate-birthdate;
    cout<<"Age: "<<age<<endl;
    return 0;
}