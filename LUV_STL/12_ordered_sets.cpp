#include<bits/stdc++.h>
using namespace std; 
void print ( set <string > &s){
    for(string value: s){
        cout<< value<<endl;
    }
    // or,
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<< (*it)<<endl;
    // }
}
int main(){
    // sets,unordered sets, multisets
    set<string> s;  //stored sortedly 
    s.insert("abc");  // O(log(n))   --> accessing, insertion
    s.insert("fow");
    s.insert("abdds");
    
    auto itr=s.find("abc");  // O(log(n))
    if(itr!=s.end()){
        cout << (*itr)<<endl;
    }
    // s.erase(32);  or, s.erase(itr);
    print(s);
    return 0;
}