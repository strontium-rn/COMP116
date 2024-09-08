// Write a program to represent a class Time which has data members Hour and Minutes with private access specifier with the following details:

// Hour holds time in Hour(s) and Minutes hold additional time in minutes.

// For example: 2 hr and 35 minutes

// Default constructor to initialize the time to 0 hours and 0 minutes.
// Parameterized constructor to initialize the time to passed values.
// Copy constructor to initialize an instance of Time to another Time instance.
// Appropriate Setter and Getter function to set and return the values stored in data members.
// A member function which adds two instances of Time and returns the summative value having declaration:
// Time operator+(Time)
// A member function which checks whether the Time is greater or smaller than the value passed to it having member function declaration:
// int operator>(Time)
// A member function which displays the time in appropriate format.
#include<iostream>
#include<string.h>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
    public:
        Time(): hour(0), minute(0){} //default
        Time(int hr, int min): hour(hr), minute(min){//parametrized
            normalizeTime();
        }
        Time(const Time& obj):hour(obj.hour), minute(obj.minute){}//copy
        void setHour(int hr){
            hour=hr;
        }
        void setMinute(int min){
            minute=min;
            normalizeTime();
        }
        int getHour(){
            return hour;
        }
        int getMinute(){
            return minute;
        }
        void display(){
            cout<<hour<<" Hour"<<minute<<" Min"<<endl;
        }
        //operator overloading for adding two instance of time
        Time operator+(Time t){
            Time result;
            result.minute = minute + t.minute;
            result.hour = hour+ t.hour + result.minute/60;
            result.minute = result.minute%60;
            return result;
        }
        //operator overloading to check if one time is greater than other
        int operator>(Time t){
            if (hour> t.hour|| (hour==t.hour && minute>t.minute)){
                return 1;
            }
            return 0;
        }
        //normalize time 
        void normalizeTime(){
            if (minute>=60)
            {
                hour+=minute/60;
                minute = minute%60;
            }
            
        }
};
int main(){
    Time t1(2,35);
    Time t2(1,45);
    Time t3=t1;
    cout<<"Time 1:"<<endl;
    t1.display();
    cout<<"Time 2:"<<endl;
    t2.display();
    cout<<"Time 3:"<<endl;
    t3.display();

    Time t4 = t1+t2;
    cout<<"Sum of time1 and time2:"<<endl;
    t4.display();

    if (t1>t2)
    {
        cout<<"Time1 is greater than time2"<<endl;
    }
    else{
        cout<<"Time2 is greater than time1"<<endl;
    }
    return 0;   

}