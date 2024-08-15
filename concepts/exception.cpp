#include<iostream>
using namespace std;

int main(){
    int num, den,res=0;
    cout<<"Enter numerator and denominator: ";
    cin>>num>>den;
    try
    {
        if (den==0)
        {
            throw 1;
        }
        else{
            res = num/den;
        }
        
    }
    catch(int)
    {
        cout<<"Denominator is not allowed to be zero";
    }
    cout<<"The result is: "<<res<<endl;
    return 0;
}