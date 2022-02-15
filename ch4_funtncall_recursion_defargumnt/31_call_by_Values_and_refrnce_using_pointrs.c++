#include<iostream>
using namespace std; 
void swap(int a , int b){        // will not swap values of actual nos.
    int temp=a;
    a=b;
    b=temp;
}

// Call by reference , using pointers
void swapPointers(int* a, int *b){        // ** to really swap the values **
    int temp =*a;
    *a =*b;
    *b=temp;
}
int main(){
    int a =44, b=34;
    cout<<"Before swaping : The value of a is "<<a<<"and the value of b is :"<<b<<endl;
    swap(a,b);
    cout<<"After swaping : The value of a is :"<<a<<" and the value of b is :"<<b<<endl;  //  Explanation : values swap nahi hui kyunki ..
    // ...  a and b are actual values and swap functn call karne se a aur b ki ek copy of values swap function mei jati hei..
    // .. actual values change nahi hoti , sirf copied values change hoti hei.........

    // To really swap the values,using pointer reference..
    swapPointers(&a,&b);            
    cout<<"After swaping : The value of a is :"<<a<<" and the value of b is :"<<b<<endl; 
    return 0;
}