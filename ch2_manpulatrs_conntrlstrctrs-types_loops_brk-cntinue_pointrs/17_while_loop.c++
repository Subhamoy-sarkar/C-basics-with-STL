#include<iostream>
using namespace std;
int main(){

    // ******while loop syntax *******
    // SYNTAX:
    // while(condition){
    //      c++ statements;
    // }

    int i=0;
    while (i<=40){
        cout<<i<<endl;
        i++;
    }
    // *infinite while-loop *
    // while (true)
    // {
    //     cout<<i;
    //     i++
    // }
    
    // ********* do-while loop ******
    // SYNTAX:
    // do{
    //     c++ statement;
    // }while(condition);

    int a=1;
    do{
        cout<<a<<endl;
        a++;
    }while (a<=32);
    
    return 0;
}