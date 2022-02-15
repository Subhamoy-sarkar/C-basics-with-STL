#include<iostream>

using namespace std;
int main(){
    int a =34;
    float b=334.34;
    cout<<"The value of a is "<<(float)a<<endl;         // or, float(a)             //--> convert to float datatype, 
    cout<<"The value of a is "<<(int)b<<endl;          // or, int(b)                // --> convert to int datatype,
    int c= int(b);                // c variable mei int value of b store ho gaya 

    cout<<"The expression is "<<a+b<<endl;           // will give a float no.
    cout<<"The expression is "<<a+int(b)<<endl;             // will give an integer
    cout<<"The expression is "<<a+ (int)b<<endl;              // will give an integer
    return 0;
}