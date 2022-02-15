#include<iostream>
using namespace std; 
class c2;
class c1{
    int val1;
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
    friend void swap(c1 &, c2 &);
};
class c2{
    int val2;
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
    friend void swap(c1 & , c2 &);
};
void swap(c1 &x, c2 &y){  // without &x , values will not swap because copies will be sent to void swap funct, so call by reference is essential 
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    c1 a;
    c2 b;
    a.indata(10);
    b.indata(11);
    swap(a,b);
    a.display();
    b.display();

    return 0;
}