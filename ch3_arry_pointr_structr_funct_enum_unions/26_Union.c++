#include<iostream>
using namespace std; 
typedef struct employee{
    int id;                 //4 bytes 
    char favchar;            //1 . .
    float salary;            //4 . .
}ep;                      //total memory allocated for structure employee--> 9 bytes

union money        // sirf ek time pe ek hi use kar sakte hoo.
{
 // jab ek time pe ek hi chizz use karna chahte ho(i.e , either rice or car or pounds, only one at a time),
 // toh c++ ke  union function se yeh tino (rice,car..pounds) memory share karenge 
    int rice; //4 bytes 
    char car; //1 . . .
    float pounds; //4 . . .
};                // here, 4(max), therefore, 4 bytes only will be allocated ..


int main(){
    union money m1;
    m1.rice=1;
    cout<<m1.rice<<endl; // will give the correct value of rice
    m1.car='c';          // overwrited , therefore , cout... , will show ASCII value of c for 24th line as rice is in integer form
    cout<<m1.rice<<endl;                  // if it is in char rice form, it would have shown c in terminal
    cout<<m1.car<<endl;           // now it will give the correct value 
    return 0;
}