#include<iostream>
using namespace std;

template<typename T>
T findMax(T x, T y){
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
    
}
int main(){
    cout<<findMax<int>(3,5)<<endl;
    cout<<findMax<float>(5.6,7.8)<<endl;
    cout<<findMax<char>('e','g')<<endl;
    return 0;
}