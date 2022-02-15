#include<iostream>
using namespace std; 

template <class T1,class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a=funcAverage(5.3543,2.345);
    cout<<a<<endl;
    a=funcAverage(3,3);
    cout<<a<<endl;

    a=funcAverage(34,455.5);
    cout<<a<<endl;
    return 0;
}