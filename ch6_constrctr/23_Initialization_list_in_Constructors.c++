#include <iostream>
using namespace std;
// used in initialization of variables inside the constructors

/*
Syntax for initialization list in constructor:
constructor(argument-list): initialization-section
{
    assignment + other code;
}
*/
class test
{
    int a, b;

public:
    // test(int i, int j) : a(i), b(j)     //a ko i ki value , and b ko j ki value assign ho jayengi
    // test(int i,int j):a(i), b(i+j);
    // test(int i, int j ):a(i),b(2*j)       will give desired result 
    // test(int i, int j):a(i),b(a+j)       again  will give desired result (as expected ).
    // test(int i, int j): b(j),a(b+i)  **IMP**--> this will create problems as 'a' will be initialized first as during variable making, we have created a before b;     
    test(int i, int j):a(i)  
    {
        b=j;
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl
             << "value of b is " << b << endl;
    }
};
int main()
{
    test t(4, 5);
    return 0;
}