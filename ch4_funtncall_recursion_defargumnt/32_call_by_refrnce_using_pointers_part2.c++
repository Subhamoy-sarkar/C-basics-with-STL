#include<iostream>
using namespace std; 
void swapPointers2(int &a, int &b){         //Explntn: &a=x (address of a variable = x), therefore, value of a = value(x)
    int temp= a;
    a=b;
    b=temp;
}
int main(){
    int x=23, y=34;
    swapPointers2(x,y);
    cout<<"The value of a and b after swapping are: "<<x<<"and "<<y<<"respectively.";
    return 0;
}