#include <iostream>
using namespace std;

template <class T>
class subho
{
public:
    T data;
    subho(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void subho<T>::display()
{
    cout << data << endl;
}

void func(int a){
    cout<<"I am first funct() "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am templatized function() "<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"I am templatized function() "<<a<<endl;
}
int main()
{
    subho<int> s(34);
    cout << s.data << endl;
    s.display();

    func(4);   // output will be --> I am first funct() 4  , **IMP**:  Exact match takes the highest priority  or otherwise..
    func1(3);      // if no exact match remains , templated function will be executed and that's how this ambiguity is resolved
    return 0;
}