#include<bits/stdc++.h>
using namespace std; 
void print ( multiset <string > &s){
    for(string value: s){
        cout<< value<<endl;
    }
}
int main(){
    multiset<string > s;
    s.insert("wojw");   // O(log(n))
    s.insert("wojw");
    s.insert("asfw");
    s.insert("wojw");
    s.insert("abc");
    s.insert("wojw");
    s.insert("abc");
    print(s);          // same elements ko bhi print karega, (lexiographically) 
    auto it=s.find("wojw");   // O(log(n))
    if(it!= s.end()){
        cout<< (*it)<<endl;      //jo wojw first mei aayega , usko iterator point karega
        s.erase(it);    // sirf us point ke element  ko hi delete karega jisko iterator point kar raha hei
    }
    cout<<endl;
    print(s);

    s.erase("wojw"); // saare wojw delete ho jayenge   // O(log(n))
    cout<<endl;
    print(s);
    return 0;
}