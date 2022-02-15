#include<iostream>
using namespace std; 
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
} ep;                         // word you can use instead of writing struct employee ___ ..

int main(){
    ep subho;
    ep harry;                // u can use --> ep subho , instead of --> struct employee subho
    subho.eid=30;
    subho.favchar='S';
    subho.salary=1000000000;        // it will print it in scientif form , i.e , in 10^9 ( 1e+09)
    cout<<"the salary of subho is :"<<subho.salary<<endl;
    cout<<"The favourite alphabet of subho is : "<<subho.favchar<<endl;
    cout<<"The employee id of subho is "<< subho.eid<<endl;
    cout<<"***********"<<endl;
    harry.eid=30;
    harry.favchar='S';
    harry.salary=1000000000;        
    cout<<"the salary of harry is :"<<harry.salary<<endl;
    cout<<"The favourite alphabet of harry is : "<<harry.favchar<<endl;
    cout<<"The employee id of harry is "<< harry.eid<<endl;
    return 0;
}