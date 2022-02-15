#include<iostream>
using namespace std; 
class A{
    int a;
    public:
        // void setdata(int a){
        //     a=a;                     --> this will give a garbage value upon printing the value of a  
        // }
        A & setData(int a ){
            this->a = a;  //this points to the object which has called/executes the member function in which it is situated.
            return *this;   //now setdata() function itself is returning the object 
        }
        void getData(){
            cout<<"The value of a is : "<<a <<endl;
        }
};
int main(){
    A a;
    a.setData(3435).getData();
    return 0;
}