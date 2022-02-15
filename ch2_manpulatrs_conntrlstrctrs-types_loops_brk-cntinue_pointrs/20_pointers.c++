#include<iostream>
using namespace std; 
int main(){
    // pointer --> it is a data type which holds the address of other data types ..
    int a =3;
    int *b=&a;              
    // or you can use:
    int x=32;
    int &d=x;
    cout<<d;                                  // it will now give 32 ,as address of d = x , therefore value of d = value(x)
    // & --> (address of) operator,     
    cout<<"The address of a "<<&a<<endl;
    cout<<"The address of a "<<b<<endl;

    // * --> (value at ) Dereference operator,
    cout<<"The value at address b  is:"<<*b<<endl;    

    // pointer to pointer
    int **c= &b;        // c is a pointer , which stores address of another pointer (here,b)
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The  value at address of c is "<<*c<<endl;                        // ek baar dereference karne se b hoga , toh b store karta hei a ka address, toh value at c = address of a 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;            // 1st time dereference karne se b hoga, ek aur bar deference karne se a hoga, ab a mei jo value hei wo ouput mei milega ,i.e= 3
    return 0;
    
}
