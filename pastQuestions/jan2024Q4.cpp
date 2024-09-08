//what is refernce variable? write a program to swap two reference variables
//reference variable is a special kind of varible which serves an alias for another variable, it doesnt have its address of own

#include<iostream>
using namespace std;

int swap(int &a, int &b){
        int temp = a;
        a=b;
        b = temp;
    }

int main(){
    int a=5,b=10;    

    cout<<"Before swapping a and b are "<<a<<", \n"<<b<<endl;
    cout<<"After swapping"<<endl;

    swap(a,b);

    cout<<"a and b are:"<<a<<", "<<b<<endl;
    return 0;    
}