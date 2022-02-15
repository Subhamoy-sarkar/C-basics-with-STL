#include<iostream>
using namespace std; 

// Base Class:
class employee{
    public:
    int id;
    float salary;
        employee(int inpId){
            id=inpId;
            salary=344.55;
        }
        employee(){}
};
// Derived Class syntax:
/*
class {{derived-class-name}} : {{visibility-mode}} {{ base-class-name}}
 {
     class members/ methods /etc..
 }  
***IMP***: Default visibility mode is private, visibility mode agar public rahega toh base class ka public members derived class mei public rahega, and agr visibility private raha toh derived class mei base class ke public members private rahenge ; and you cannot inherit private members of the base class in any case
 */

// Creating a programmer derived class from Employee base class:
class programmer: employee{  //here visibility mode is the default one, i.e private
    public:
    programmer(int inpId){  //iske liye ek empty constrctr dena padega base class mei taki error na de 
        id=inpId;
    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(1);
    cout<<skillf.languageCode<<endl;

    programmer skillf1(2);
    skillf1.getData();

    return 0;
}