#include<iostream>
// run-time polymorphism:
using namespace std; 
class base{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
    }

};
class derived:public base{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        cout<<"Displaying derived class variable var_derived : "<<var_derived<<endl;
    }
};
int main(){
    base *base_ptr;
    base obj_base;
    derived obj_derived;
    base_ptr = &obj_derived;
    //kyunki apne base class ke pointer ko derived class ke obj se point kara diya, toh display call karne par bhi, base class ka hi display function call hoga , kyunki pointer toh base class ka hi hei,   and this is called : late binding

    base_ptr->var_base=345; // same as : obj.var_base=34; | we can access var_base as it is public
    // base_ptr->var_derived=3455;   --> ERROR you can't access var_derived as it is under derived class and pointer is of base class.. 
    base_ptr->display();

    derived *derived_ptr =&obj_derived;  // is pointer se tum base+derived dono class ko access kar sakte ho
    derived_ptr->var_derived=343;
    derived_ptr->var_base=5458;

    derived_ptr->display();
    return 0;
}