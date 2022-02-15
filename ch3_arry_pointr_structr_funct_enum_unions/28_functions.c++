#include<iostream>
using namespace std; 

int sum(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    // function is a part of top-down structured programming 
    // function means--> apne program ko tukdo mei tod do , aur alag alag tukdo se alag alag kaam karwaao 
    int num1,num2;
    cout<<"Enter first no : ";
    cin>>num1;
    cout<<"Enter second no : ";
    cin>>num2;
    sum(num1,num2);
    cout<<"The sum is : "<<sum(num1,num2)<<endl;
    cout<<"The sum is : "<<sum(2,3)<<endl;
    return 0;
}