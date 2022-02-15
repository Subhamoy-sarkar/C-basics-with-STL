#include<iostream>
using namespace std; 
template<class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=345;
    int y=2;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}