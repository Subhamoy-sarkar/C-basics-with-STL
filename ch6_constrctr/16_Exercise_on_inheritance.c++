#include <iostream>
#include <cmath>
using namespace std;
class simpleCalc
{
public:
    int a, b;
    void setno(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void getno()
    {
        cout << "The addition of the two nos. gives : " << a + b << endl;
        cout << "The subtraction of the two nos. gives : " << a - b << endl;
        cout << "The Multiplication of the two nos. gives : " << a * b << endl;
        cout << "The division of the two nos. gives : " << a / b << endl;
    }
};

class scifiCalc : public simpleCalc
{
public:
    void scifi_op()
    {
        cout << "The value of a power b is " << pow(a, b) << endl;
        cout << "The value of sin(a+b) is " << sin(a + b) << endl;
        cout << "The value of cos(a+b) is " << cos(a + b) << endl;
        cout << "The value of log a to base b is " << log(a) / log(b) << endl;
    }
};
class hybridCalc : public scifiCalc
{
public:
    void check()
    {
        cout << "Multilevel inheritance " << endl;
    }
};
int main()
{
    hybridCalc s;
    s.setno(45, 45);
    s.getno();
    s.scifi_op();
    s.check();
    return 0;
}