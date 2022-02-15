#include <iostream>
#include <cmath>

using namespace std;
class simpleCal
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a and b respectively" << endl;
        cin >> a >> b;
    }
    void performOperationSimple()
    {
        cout << "The addition of the two nos. gives : " << a + b << endl;
        cout << "The subtraction of the two nos. gives : " << a - b << endl;
        cout << "The Multiplication of the two nos. gives : " << a * b << endl;
        cout << "The division of the two nos. gives : " << a / b << endl;
    }
};
class scifiCal
{
    int a, b;

public:
    void getDataScifi()
    {
        cout << "Enter the value of a and b respectively" << endl;
        cin >> a >> b;
    }
    void performOperationScifi()
    {
        cout << "The value of a power b is " << pow(a, b) << endl;
        cout << "The value of sin(a+b) is " << sin(a + b) << endl;
        cout << "The value of cos(a+b) is " << cos(a + b) << endl;
        cout << "The value of log a to base b is " << log(a) / log(b) << endl;
    }
};
class hybdCalc : public scifiCal, public simpleCal
{
};
int main()
{
    hybdCalc h;
    h.getDataScifi();
    h.getDataSimple();
    h.performOperationScifi();
    h.performOperationSimple();
    return 0;
}