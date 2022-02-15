#include<iostream>
int c=34;
using namespace std;
int main(){
    // *****************************************************build in data types*****************************************************
    int c=343,d=434;
    cout<<"The value of c is:"<<c<<endl<<"The value of d:"<<d<<endl;
    cout<<"The value of global c is :"<<::c;           // scope resolution operator, if we want to ignore local variable and go to global variable directly

    // *************************float, double and long double literals************************* 

    //float q=3.3;               // isko  compiler double ki tarah lega 
    //long double w=2.3;             // same "      "   "        "
    // therefore,

    float q= 3.3f;                        // suffix f/F lagane se  isko compiler float ki tarah lega
    long double w=32.4l;                   // suffix l/L lagane se isko compile long double ki tarah lega         
    // even though output in these case remains the same , when we print it (cout).....
    cout<<endl;
    cout<<"The value of 3.3f is "<<sizeof(3.3)<<endl;  // size=8 ( as compiler is taking it as double)
    cout<<"The value of 3.3f is "<<sizeof(3.3f)<<endl; // size = 4 (as it is now considered as a float)
    cout<<"The value of 3.3f is "<<sizeof(32.4)<<endl; // size =8 (taken as double )
    cout<<"The value of 3.3f is "<<sizeof(32.4l)<<endl; // size=16(taken as long double data type)
    

    return 0;
}