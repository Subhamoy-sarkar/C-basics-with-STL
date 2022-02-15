#include<iostream>
using namespace std; 
class complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setdata(int a, int b){
        real =a;
        imaginary=b;
    }
};
int main(){
    // complex c1;
    // complex *ptr=&c1;     or, you can make pointer object by:
    complex *ptr= new complex;

    (*ptr).setdata(34,16);    // or, ptr->setdata(34,25);   (Arrow operator)
    (*ptr).getdata();          // or,  ptr->getdata();

    // Array of objects:

    // 4 integers store karne jitni memory allocate kardo ptr1 mei ..
    complex *ptr1= new complex[4];   // array of 4 new objects using pointers  , and we can access by increasing pointers (ptr1+1....)
    ptr1->setdata(34,535);
    ptr1->getdata();
    return 0;
}