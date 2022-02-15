#include<iostream>
using namespace std; 
/*
Case 1:
Class B: Public A{
    // order of execution of constructor -> first A() then B()
};

Case 2:
class A: public B, Public C{
    // Order of execution of constructor -> B() then C() and then A()
};

Case 3:
class A: public B , virtual public C{
    // order of execution of constructor -> C() then B() and then A()
};
*/
class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printData1(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
        cout<<"base2 class constructor called"<<endl;
    }
    void printData2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class derived: public base2, public base1{    //here, base2 class constructor will be called first then, base1 class constructor
    int derived1, derived2;
    public:
    derived(int a , int b , int c , int d): base1(a),base2(b){  // here, call order of base1(a),base2(b) can't determine call order of class constructors of base1 and base 2, only line 41 can determine constructor call order
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
    }
        void printData3(){
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main(){
    derived d(1,2,50,50);
    d.printData3();
    d.printData1();
    d.printData2();
    return 0;
}