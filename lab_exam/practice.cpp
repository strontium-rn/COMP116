//sorting an array using template
#include<iostream>
using namespace std;

template <typename T>void BubbleSort(T arr[], T n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]> arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
};

int main(){
    int arr[]={23,21,45,18,98};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,n);

    cout<<"Sorted Array using template is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}