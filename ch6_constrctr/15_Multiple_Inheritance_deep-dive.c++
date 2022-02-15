#include<iostream>
using namespace std; 
// Syntax for in heriting in multiple inheritance
// class derived: visibility-mode base1, visibility-mode base 2    ..(continued)
// {
//     class body of class "derived"
// }

class base1 {
    protected:
        int base1int;
    public:
        void setBase1int(int a){
            base1int=a;
        }
};
class base2 {
    protected:
        int base2int;
    public:
        void setBase2int(int a){
            base2int=a;
        }
};

class derived: public base1, public base2{
    public:
        void show(){
            cout<<"The value of base1int is "<<base1int<<endl;
            cout<<"The value of base2int is "<<base2int<<endl;
            cout<<"The value of base1int + base2int is "<<base1int+ base2int<<endl;
        }
};
// The inherited derived class will be look something like this:
// Data members:
//    base1int --> protected
//    base2int --> protected
// 
// Member functions:
//     setBase1int() --> public
//     setBase2int() --> public
//     show()  --> public

int main(){
    derived subho;
    subho.setBase1int(30);
    subho.setBase2int(70);
    subho.show();
    return 0;
}