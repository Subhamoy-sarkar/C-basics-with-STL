#include<iostream>
#include<map>
#include<string>
using namespace std; 
// Map key-value players ko store karne ke kaam ata hei
// Map is an associative array

int main(){
    map<string,int>marksMap;
    marksMap["Harry"]=99;   //  O(log(n));
    marksMap["subho"]=98;
    marksMap["Rohan"]=34;

    marksMap.insert({{"subhamoy",100},{"sarkar",99}});
    map<string,int> :: iterator itr;
    for(itr=marksMap.begin();itr != marksMap.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    //or you can use:
    for(auto &pr : marksMap){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max_size is : "<<marksMap.max_size()<<endl;
    cout<<"Is it empty ? (0-> false, 1-> true) : "<<marksMap.empty()<<endl;
    return 0;
}