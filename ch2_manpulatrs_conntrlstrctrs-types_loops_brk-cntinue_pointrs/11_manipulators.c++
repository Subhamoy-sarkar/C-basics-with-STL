#include<iostream>
#include<iomanip>                          // to use manipulators 
using namespace std;
// endl is a manipulator too
int main(){
    int a =3, b=343,c=34322;
    cout<<"The value of a without setw :"<<a<<endl;
    cout<<"The value of b without setw :"<<b<<endl;
    cout<<"The value of c without setw :"<<c<<endl;

    cout<<"The value of a with setw :"<<setw(7)<<a<<endl;
    cout<<"The value of b with setw :"<<setw(7)<<b<<endl;
    cout<<"The value of c with setw :"<<setw(7)<<c<<endl;
    return 0;
} 