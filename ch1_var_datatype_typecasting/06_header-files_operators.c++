// There are two types of header files:

// 1. System header files: it comes with the COMPILER
#include<iostream>
// 2. User defined header files : it is written by the programmer 
//#include<this.h>               // it will show error unless a file is made named as- this.h ,  in the current directory(in this  case , current directory is : ch1_var_data...)

// for header files: cppreference.com

using namespace std;
int main(){
    int b=43,a=434;
    cout<<"operators in c++:"<<endl;          // endl equavalent to newline character, i.e ,it jumps to new line 
    // arithmetic operators
    cout<<"THe value of a+b is:"<<a+b<<endl;
    cout<<"THe value of a-b is:"<<a-b<<endl;
    cout<<"THe value of a*b is:"<<a*b<<endl;
    cout<<"THe value of a/b is:"<<a/b<<endl;
    cout<<"THe value of remainder when a/b is:"<<a%b<<endl;
    cout<<"THe value of a++ is:"<<a++<<endl;                     //  a++ means,pehele print karo phir increament karo
    cout<<"THe value of a-- is:"<<a--<<endl;
    cout<<"THe value of ++a is:"<<++a<<endl;                      // ++a means, pehele increament karo phir print karo
    cout<<endl;

    // Assignment operators                                     --> used to assign values to variables 
    //eg, int a=33;char s='s';

    // comparison operators 
    cout<<"Following are the types of comparison operators;"<<endl;
    cout<<"The value of a==b is:"<<(a==b)<<endl;
    cout<<"The value of a!=b is:"<<(a!=b)<<endl;                      // 0- false, 1- true
    cout<<"The value of a>=b is:"<<(a>=b)<<endl;           
    cout<<"The value of a<=b is:"<<(a<=b)<<endl;
    cout<<"The value of a<b is:"<<(a<b)<<endl;
    cout<<"The value of a>b is:"<<(a>b)<<endl;                      // These all will give outputs as 0 and 1 (i.e in binary), where 0 for false,and 1 for true

    cout<<endl;

    // logical operators 
    cout<<"Following are the types of logical operators;"<<endl;
    cout<<"The value of and logical operator  is:"<<((a==b) && (a<b))<<endl;        // and operator, if both the condition satisfied , then  whole is true 
    cout<<"The value of or logical operator  is:"<<((a!=b) || (a>b))<<endl;        // or operator, if any one of the two condition satisfy, whole is true  
    cout<<"The value of logical not operator is:"<<(!(a>=b))<<endl;                  // not operator, if true , then it will output as false and vice-versa 
}