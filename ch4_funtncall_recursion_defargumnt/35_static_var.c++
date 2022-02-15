#include<iostream>
using namespace std; 
int lol(int a , int b ){
    static int c=0;        // this executes only ones          
    c=c+1; // next time this function runs, the value of c ( last time) will be retained ..
    //                                                  ..  coz ,  function saare var ko bhul jaata hei, sirf static ko chod ke ..
    return a*b+c;
}
int main(){
    int a=1,b=2;
    cout<<"output:"<<lol(a,b)<<endl;
    cout<<"output:"<<lol(a,b)<<endl;
    cout<<"output:"<<lol(a,b)<<endl;
    cout<<"output:"<<lol(a,b)<<endl;
    cout<<"output:"<<lol(a,b)<<endl;
    return 0;
}
// Advise : run this code first without at all changing it , then run it after removing static word , you will understand better