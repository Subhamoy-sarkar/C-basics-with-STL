#include<bits/stdc++.h>
using namespace std; 
void print ( unordered_set <string > &s){
    for(string value: s){
        cout<< value<<endl;
    }
    // or,
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<< (*it)<<endl;
    // }
}
/*
 note:
jyada complex datatypes ko use nahi kar sakte unmaps mei , but ordered maps mei use kar sakte ho 
                                     e.g :    unordered_map < pair<int, int> ,string > m;  
                                               yaha pe use nahi kar sakte kyunki pair, vector, sets , inn sab ka hashfunction define nahi hei  
*/
int main(){
    // sets,unordered sets, multisets
    unordered_set<string> s;  //unsorted, random(using hashtables)
    s.insert("abc");  // O(1)   --> accessing, insertion
    s.insert("fow");
    s.insert("abdds");
    auto itr=s.find("abc");  // O(1)
    if(itr!=s.end()){
        cout << (*itr)<<endl;
    }
    // s.erase(32);  or, s.erase(itr);
    print(s);
    return 0;
}