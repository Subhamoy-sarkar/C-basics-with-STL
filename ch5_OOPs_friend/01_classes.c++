#include<iostream>
using namespace std; 
class employee
{
private:
    int a , b, c;
public:
    int d , e;
    void setdata(int a1,int b1,int c1);    // declaration : matlb yeh mil jayega aage ( we tell this to compiler)
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
}subhamoy;  //you can directly declare objects in Classes

void employee:: setdata(int a1, int b1 , int c1){        // :: --> is scope resolution operator
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    subhamoy.setdata(4,4,5);
    subhamoy.d=11;
    subhamoy.e=22;
    subhamoy.getdata();

    employee subho;
    // subho.a=232;        // yeh private hei toh aap isko directly access nahi kar sakte, isko sirf employee class ka koi function access kar sakta hei
    subho.d=23;
    subho.e=32;
    subho.setdata(2,3,4);
    subho.getdata();
    return 0;
}
// memory allocation nahi hota class banane se , object banane se memory allocation hota hei ....(partially true statement)