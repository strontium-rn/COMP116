// discuss default argument with suitable example
/*default arguments are function parameters that are given default values, if other values are not given then default arg comes into play*/
#include<iostream>
#include<string.h>
using namespace std;

void displayInfo(string name="Aarya", int age=19){
    cout<<"Name: "<<name<<", Age: "<<age<<endl;
}
int main(){
    displayInfo();
    displayInfo("Poshak");
    displayInfo("Poshak", 22);
    return 0;
}