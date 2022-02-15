#include<iostream>
using namespace std;
int main(){
    //**************************reference variable*************************
    // example :        subhamoy--> subho--> nanu--> subham
    float x=32;
    float & y=x;
    cout<<"The value of x :"<<x<<endl;
    cout<<"The value of y : "<<y<<endl;         // here , y points to x, i/e y is a reference variable of x , i.e , y is a different name of one variable which contain 32
    // therefore , both will give 32 as output
    return 0;
}