#include<iostream>
using namespace std; 
class simple{
    int data1,data2;
    public:
    simple(int a , int b=9){
        data1=a;
        data2=b;
    }
    void printdata();
};
void simple::printdata(){
    cout<<"The value of data1 is "<<data1<<" and of data2 is "<<data2<<endl;
}
int main(){
    simple s(1,4);
    s.printdata();

    simple f(23);
    f.printdata();
    return 0;
}