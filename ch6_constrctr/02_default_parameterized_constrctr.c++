#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int , int );        // Constructor declaration 
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
// Complex::Complex(void);        // ---> this is a default constctr as it doesn't  takes or,accepts  parameters
Complex ::Complex(int x , int y) // ----> this is a  parameterized constructor as it takes  parameters
{
    a =x;
    b = y;
}
int main()
{
    // Implicit call
    Complex a(3,4);
    a.printNumber();
    
    // Explicit call
    Complex b=Complex (323,423);
    b.printNumber();
    return 0;
}