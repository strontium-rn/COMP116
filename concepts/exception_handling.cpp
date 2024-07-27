#include<iostream>
using namespace std;

int main(){
    int a[5], size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    try{
        if (size>5)
        {
            throw 10;
        }
        for (int i = 0; i < size-1; i++)
        {
            cout<<"Array["<<i<<"]: ";
            cin>>a[i];
        }     
        for (int i = 0; i < size-1; i++)
        {
            if (a[i]<0)
            {
                throw 2.5;
            }
            
        }
        
        
    }
    catch(int x){
        cout<<"The size of the array is excedded"<<endl;
    }
    catch(float x){
        cout<<"No negative value"<<endl;
    }

}