#include<iostream>
using namespace std; 
class number{
    int a;
    public:
        number(){
            a=0;
        }
        number(int num){
            a=num;
        }
        //when no copy constructor is found, compiler supplies its own copy constructor;
        //copy constructor:
        number(number &obj){
            cout<<"Copy constructor called !!!"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    number x(34),y(54),z(43),z2;
    x.display();
    y.display();
    z.display();
    
    number z1(x); //copy constructor invoked
    z1.display();

    z2=z;   //copy constructor not invoked , coz z2 object is already been made in line 23
    number z3=z;   //copy constructor invoked
    return 0;
}