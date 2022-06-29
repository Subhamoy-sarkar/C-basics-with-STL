#include<bits/stdc++.h>
using namespace std; 

int main(){
    queue<string> q;
    q.push("sljf");
    q.push("subhamoy");
    q.push("jf");
    q.push("sljfggrf");
    while(!q.empty()){
        cout<< q.front()<<endl;    // will print front/ first (FIFO) element   
        q.pop();                     // will delete front/ first (FIFO) element
    }
    return 0;
}