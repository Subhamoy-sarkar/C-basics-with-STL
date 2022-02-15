#include<iostream>
using namespace std; 
class base{
    public:
    int var_base=232;
    virtual void display(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
    }

};
class derived:public base{
    public:
    int var_derived=3435;
    void display(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        cout<<"Displaying derived class variable var_derived : "<<var_derived<<endl;
    }
};
int main(){
    base *ptr_base;
    derived obj_derived;
    base obj_base;
    ptr_base=&obj_derived;
    ptr_base->display();  // now it will bind to derived class's display function despite pointer is of base class, as display function of base class is virtual , therefore if we call display function  and pointer(of base class) is pointing towards derived class, then it will call display function of derived class .(virtual function-> it will override default behavior.)
    return 0;
}