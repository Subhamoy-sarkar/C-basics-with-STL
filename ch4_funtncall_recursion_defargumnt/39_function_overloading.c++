#include<iostream>
using namespace std; 
// function overloading (ek hi naam ke different functions kaise different types ke kaam karwa sakta hei)
int add(int a , int b){
    cout<<"Using function with 2 arguments "<<endl;
    return a+b;
}
int add(int a ,int b , int c){
    cout<<"Using function with 3 arguments "<<endl;
    return a+b+c;
}
// volume of cylinder
int vol(double r, int h){
    return (3.14*r*r*h);
}
// volume of cube
int vol(int s){
    return (s*s*s);
}
// volume of rectangular box
int vol(int l, int b , int h){
    return(l*b*h);
}
int main(){
    cout<<"The sum of 3 and 6 is :"<<add(3,6)<<endl;
    cout<<"The sum of 3 ,3, 6 is :"<<add(3,6,3)<<endl;
    cout<<"The volume of cylinder is:"<<vol(3,4)<<endl;
    cout<<"The volume of cube is : "<<vol(5)<<endl;
    cout<<"The volume of rectangular box : "<<vol(3,3,3);
    return 0;
}