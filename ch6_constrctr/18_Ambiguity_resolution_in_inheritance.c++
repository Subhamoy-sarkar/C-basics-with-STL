#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Kaise hei aap log ? " << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet(); // ambiguity resolution, here now greet function under base1 will work for derived class objects
    }
};




class B
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class D : public B
{
public:
    // D's new say() method will override B's say( method )
    void say()
    {
        cout << "hello guys" << endl;
    }
}; 

int main()
{
    // Ambiguity 1 :
    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived a;
    // a.greet();     //  --> it is ambiguous if ambiguity is not resolved (it is resolved in line no. 17-20)

    // ambiguity 2 :
    B b;
    b.say();
    D d;
    d.say();      // here ambiguity is already resolved as , derived class's say() function will take precendence to base class's say()
    return 0;
}