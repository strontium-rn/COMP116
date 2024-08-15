#include<iostream>
using namespace std;

template <typename T> void bubblesort(T a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; i < j; j--)
        {
            if (a[j]< a[j-1])
                swap(a[j], a[j-1]);       
                       
        }        
    }    
}

int main(){
    int a[5] = {44,55,33,22,11};
    int n = sizeof(a)/sizeof(a[0]);

    bubblesort<int>(a,n);
    cout<<"Sorted Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i] <<endl;
    }
    return 0;        
}