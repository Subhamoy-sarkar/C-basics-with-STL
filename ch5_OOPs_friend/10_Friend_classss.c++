#include <iostream>
using namespace std;
// forward declaration
class Complex; // i.e - we promise compiler that there will be a class complex   in below lines
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
    // return o1.a + o2.a;        // yaha humne yeh declare kar diya (line4)ki ek complex class hei, but yeh nhi bola ki us class
    // a , b hei ya nahi , ...... isliye yeh error throw karega , to solve this we will only declare sumrealcomplex here, and
    // will give definition after complex class
    int sumcomcomplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring functions of a new class as friends
    friend int calculator ::sumrealcomplex(Complex, Complex);
    friend int calculator ::sumcomcomplex(Complex, Complex);

    // ******Aliter : Declaring the entire calculator class as friend *******
    friend class calculator;

public:
    void setnum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum(void)
    {
        cout << "Your  number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcomcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
// class calculator{             *****// isko upar likhna padega kyunki compiler upar se niche padta hei
//     public:
//         int add(int a, int b){
//             return (a+b);
//         }
//         int sumrealcomplex(Complex o1, Complex o2){
//             return o1.a + o2.a;                           // it is early showing you can't access pvt data of complex class:
//             //                        to solve this , we will declare friend functn
//         }
// };
int main()
{
    Complex o1, o2;
    o1.setnum(3, 3);
    o2.setnum(4, 9);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real parts of o1 and o2 is : " << res << endl;
    int l = calc.sumcomcomplex(o1, o2);
    cout << "The sum of complex parts of o1 and o2 is : " << l << endl;
    return 0;
}