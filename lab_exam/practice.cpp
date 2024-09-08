//handling exception
#include<iostream>
using namespace std;

int main(){
    int numerator, denominator;
    cout<<"Enter numerator and denominator"<<endl;
    cin>>numerator>>denominator;


    try
    {
        if(denominator == 0){
        throw 10;
        }

        int div = numerator/denominator;
        cout<<"Result is: "<<div;
    }
    catch(int)
    {
        cout<<"There should not be 0 in deno";
    }
    return 0;
}