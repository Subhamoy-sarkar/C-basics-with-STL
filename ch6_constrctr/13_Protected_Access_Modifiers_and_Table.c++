#include <iostream>
using namespace std;
class base
{
protected:    //private jaisa hota hei , but inherit ho sakta hei
    int a=23;

private:
    int b;
};

// for a protected member:
//                        Public derivation            Private derivation        Protected derivation
// 1.private members        Not inherited               note inherited              not inherited
// 2.protected members      protected                   private                     protected
// 3.public members         public                      private                     protected

class Derived :protected base
{  public:
    void display(){
    cout<<a;    //a is accessable , smile now
}
};


int main()
{
    base b;
    Derived d;
    // cout<<d.a;    --> will not work since a is protected in both base and derived class
    d.display();
    return 0;
}