#include<bits/stdc++.h>
using namespace std; 
int main(){
    map < int, string> m;  // maps store in sorted order(accrdng to keys), if key is string, it will sort in lexiographically
    m[1] ="abcd";  // O(log(n))    , n -> it's current value 
    /* but if, map<string, string> m;
    then, time complexity will depend on lengths of the string in keys:
    m["sofjwof"]="sjhfowf";    // complexity:   s.size()*log(n)
    */
    m[5]="jfwif";
    m[3]="wow";
    m[3]="replaced" ; // key values are unique, therefore, value will be replaced 
    // m[4];  // it will still take O(log(n)) time , and will insert an empty string in this case , in case of int, it will insert 0
    m.insert({2,"fjwif"});
    map<int, string> :: iterator it;
    // for(it = m.begin();it != m.end();it++){
    //     cout<< (*it).first << " "<< it->second << endl;
    // }  or,
    for(auto &pr: m){   // O(n)
        cout<<  pr.first << " "<< pr.second<< endl;  //  O(log(n))
    }    
    cout<<endl;
    //Using auto in iterator:
    for(auto pr=m.begin();pr != m.end();pr++){
        cout<< pr->first <<" " << pr->second <<endl;
    }
    cout<<endl;

    auto itr= m.find(5); //O(log(n))  // will return iterator where 5(key ) is stored , if 5 is not found, it will return m.end()
    if(itr== m.end()) cout<<"NO VALUE"<<endl;
    else cout<<(*itr).first <<" "<<itr->second<<endl;
    cout<<endl;
    if(itr!=m.end())  m.erase(itr);  // will erase the key and it's value to which iterator is pointing , if itr point to m.end() , then it will give segmentation error IMP

    m.erase(3);   //3-->key |  will erase key and its value, in this case 3(key) and its value will be deleted
    
    for(auto &i:m){
        cout<< i.first<< " "<<i.second<<endl;
    }
    m.clear();  // map will be clear..

    
    return 0;
}