#include<iostream>
using namespace std; 
struct employee
{
    int eID;
    char favchar;
    float salary;
};
int main(){
    struct employee subho;    //struct employee subho={2342,'s',2423555};     -->you can declare directly
    struct employee harry;
    subho.eID=30;
    subho.favchar='S';
    subho.salary=1000000000;        // it will print it in scientif form , i.e , in 10^9 ( 1e+09)
    cout<<"the salary of subho is :"<<subho.salary<<endl;
    cout<<"The favourite alphabet of subho is : "<<subho.favchar<<endl;
    cout<<"The employee ID of subho is "<< subho.eID<<endl;
    cout<<"***********"<<endl;
    harry.eID=30;
    harry.favchar='S';
    harry.salary=1000000000;        
    cout<<"the salary of harry is :"<<harry.salary<<endl;
    cout<<"The favourite alphabet of harry is : "<<harry.favchar<<endl;
    cout<<"The employee ID of harry is "<< harry.eID<<endl;
    return 0;
}