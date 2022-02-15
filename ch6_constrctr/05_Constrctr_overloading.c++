#include<iostream>
using namespace std; 
class complex{
    int a,b;
    public:
    complex(int x, int y){
        a=x;
        b=y;
    }
    complex(){
        a=0;
        b=0;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printNumber(){
        cout<<"Your Number is "<<a<<" + "<<"i"<<endl;
    }
};
int main(){
    complex c1(34,53);
    c1.printNumber();

    complex c2(4);
    c2.printNumber();

    complex c3;
    c3.printNumber();
    return 0;
}