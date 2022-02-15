#include<iostream>
using namespace std; 

// swaping by usign c++ reference variables
int & swapreference(int &a, int &b){          
    int temp=a;
    a=b;
    b=temp;
    return a; // a ko return kar rahe hei, aur a ek reference variable hei jo x ko point kar raha hei, toh yeh x..
}  //                         ..  ka reference return karega, toh , x ki value change ho jayegi to 34323..
 //                       ..  , kyunki  wo humne equal kar diya 34323 ke and y ka value change hoke x ka value ho gaya
int main(){
    int x=32,y=3434;
    swapreference(x,y)=34323;  // this will swap x and y using reference variables
    cout<<"The value of x : "<<x<<" and the value of y : "<<y; 
    return 0;
}