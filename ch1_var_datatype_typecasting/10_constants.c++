#include<iostream>
using namespace std;
int main(){
    int a =32;
    cout<<"The value of a :"<<a<<endl;
    a=322;                                              // here value can be changed 
    cout<<"The changed value of a :"<<a<<endl;    

    // ******************constants*********************
    const int b=23;                                             // read only variable
    cout<<"The value of b :"<<b<<endl;
    //b=32;                                        // here the constant value can't be changed , and therefore it will show an ERROR

    

    return 0;
}