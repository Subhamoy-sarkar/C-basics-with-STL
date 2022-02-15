#include<iostream>
using namespace std; 
    //  creating a constructor
class Complex{
    int a, b;
    public:
    //  constructor is a special member function with same name as of the class...
    //  It is automatically invoked whenever an  object is created 
    //  it is used to initialize the objects of its class ;
    
    Complex (void);      // constructor declaration 
    void printNumber(){
        cout <<"Your number is "<< a<< " + "<<b<<"i"<<endl;
    }
};
Complex :: Complex ( void){  // --> This is a _default constructor_ as it takes no parameters ..
    a=23;
    b=324;
}
int main(){
    Complex c, d, e;
    c.printNumber();
    d.printNumber();
    e.printNumber();
    return 0;
}


// properties of constructor :
// 1. It  should be declared in the public section o fthe class
// 2. They are automatically invoked whenever the object is created ( automatically run whenever object is created)
// 3. Do not have return types and they cannot return values .. 
// 4. It can have default arguments..
// 5. We cannot refer to their address