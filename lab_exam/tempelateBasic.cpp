#include<iostream>
using namespace std;

template <typename T> T mymax(T a, T b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
    
}
int main(){
    cout<<mymax<int>(3,7)<<endl;
    cout<<mymax<char>('g', 'a')<<endl;
    cout<<mymax<float>(7.9,8.2)<<endl;

    return 0;
}