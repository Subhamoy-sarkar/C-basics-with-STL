#include<iostream>
using namespace std;
int main(){
    int a =2, b=3;
    // int c =a*3 +b -32;               check OPERATOR PRECEDENCE table in **cppreference site**, and the one with higher precedence,
    //                                                                                             put it in bracket like below 
    //int c =(a*5)+b-32+322;

    // now, for operators with same precedence, use ASSOCIATIVITY and check the mentioned site ,whether we have to go (left to right) or (right to left) ,
    //then put bracket accordingly,    here after checking final is:
    int c = ((((a*5)+b)-32)+322);               //here we go from  left to right

    //c=a*5+b-32+322;    // ***lol meine yeh experiment kiya , aur paya ki it gives the same value whether u put bracket or not***
    cout<<c<<endl;    
    c=a*(5+b)-32+322;
    cout<<c; 
    // conclusion : put brackets according to your will lol ;
    return 0;
}
