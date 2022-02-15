#include<iostream>
using namespace std; 

template<class T1=int, class T2=float , class T3=char>
class subho{
    public:
        T1 a;
        T2 b;
        T3 c;
        subho(T1 x, T2 y, T3 z){
            a=x;
            b=y;
            c=z;
        }
        void display (){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value oc b is "<<c<<endl;
            cout<<endl;
        }

};
int main(){
    subho<> h(423,3.4,'c');
    h.display();

    subho<float,char,char> s(2.3,'s','s');
    s.display();
    return 0;
}