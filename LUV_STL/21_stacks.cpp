// #include<iostream>
// #include<stack>
#include<bits/stdc++.h>
using namespace std; 

int main(){
    stack<int>s;
    s.push(23);
    s.push(2943);
    s.push(3);
    s.push(2);
    while(!s.empty()){
        cout<<s.top()<<endl;    // will print topmost/ last (LIFO) element,i.e , 2 
        s.pop();                // will remove topmost/last element , i.e, 2
    }
    return 0;
}