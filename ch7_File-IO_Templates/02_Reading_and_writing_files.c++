#include<iostream>
#include<fstream>
using namespace std; 
//The useful classes for working with files in C++ are :
// 1.fstreambase
// 2.ifstream --> derived from fstreambase
// 3.ofstream --> derived from fstreambase

/* In order to work with files in c++, you will have to open it. Primarily, there are 2 ways to open a file:
    1.Using the constructor
    2.Using the member function open() of the class
*/
int main(){
    string st="subhamoy sarkar";
    string st2;
    // Opening files using constructor and writing in it :
    // ofstream out("02_sample.txt");      //write operation   ( you can use any name in place of 'out')
    // out<<st;

    // opening files usin constructor and reading it :
    ifstream in ("02_sample.txt");  // Read operation        ( you can use any name in place of 'in')
    // in>>st2;   yeh waha tak hi file mei string ko read kar paega jab tak ki newline or, space na aa jae , uske baad read nahi kar paega

    getline(in,st2);// pure ek line ko read karega
    cout<<st2;

    return 0;
}