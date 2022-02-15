#include<iostream>
using namespace std; 
// recursion --> function apne aap ko call karta reheta hei,till desired result...
int factorial (int n){
    if (n<=1){                     // ****base condition****(its essential in recurssion)
        return 1;
    }
    return n*factorial(n-1);
}
// step by step calculation of factorial(4) :
// factorial(4)=4*factorial(3)
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);
// factorial(4)=4*3*2*1;
// facotorial(4)=24;
int main(){
    // factorial of a number:
    // 6!= 6*5*4*3*2*1=720
    // 0!= 1 (by definition )
    // 1!=1(by definition )
    // n!=n * (n-1)!
    int a;
    cout<<"Enter a number "<< endl ;
    cin>>a;
    cout<<"The factorial of "<<a<<" is : "<<factorial(a)<<endl;
    return 0;
}