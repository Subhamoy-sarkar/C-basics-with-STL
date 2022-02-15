#include<iostream>
using namespace std; 

// funntion protype below:
// syntax :  type function-name(arguments);

int sum(int a, int b);   // --> yeh bolta hei compiler ko, ki "sum" naam ka function niche aane wala hei, so be ready(gives assurance, not gurantee)

// int sum(int a , b);      // --> not permissible
// int sum (int , int );   // --> permissible 

int main(){
    int num1,num2;                // ****IMP***** num1 & num2 are actual parameters
    cout<<"Enter first no : ";  
    cin>>num1;
    cout<<"Enter second no : ";
    cin>>num2;
    sum(num1,num2);
    cout<<"The sum is : "<<sum(num1,num2)<<endl;           
    cout<<"The sum is : "<<sum(2,3)<<endl;
    return 0;
}
int sum(int a, int b){       // a and b will be taking values from actual parameters(i.e, num1,num2)

    int c=a+b;                     //  ****imp****  a, b are Formal parameters
    return c;            
}                                // formal and actual parameter names can be same ( a, b both)