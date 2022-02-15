#include<iostream>
using namespace std; 
int main(){
    
    // *****IMP******
    // address current = p; address new = p+i ;  
    // POINTER ARITHMETIC:-
    // address(new) = address(current) + ( i * size of(datatype))
    int marks[]={99,324,2423,234234,11223};

    int *p=marks;      //or, int *p=&marks[0];
    cout<<"The value of marks no.1 is:"<<*p<<endl;
    cout<<"The value of marks no.2 is:"<<*(p+1)<<endl;                 // points to marks[1].. and so on.........
    cout<<"The value of marks no.3 is:"<<*(p+2)<<endl;
    cout<<"The value of marks no.4 is:"<<*(p+3)<<endl;
    cout<<"The value of marks no.5 is:"<<*(p+4)<<endl;

    // concept  **imp***
    cout<<*(p++)<<endl;            // it will print the value of *p (i.e,marks[0]) and then increase the value of p  from next line ..
    cout<<*p<<endl;                // value of p++ will be print (i.e , marks[1]) and so on.......
    cout<<*(++p)<<endl;           // it will first increase the value of p then print value of *(++p) , and so on .....  
    return 0;
}