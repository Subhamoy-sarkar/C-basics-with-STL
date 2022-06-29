#include<bits/stdc++.h>
// Yaar tu iss video ko dobara dekhna , 😂😥
using namespace std; 

int main(){
    map<pair<string,string>,vector<int>>m;   // here paired keys are compared based on their first element, if 2 or more are equal ,the second element of the pair are compared , and same for sets,.... comparison hota hei har jagah
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        string fn,ln;
        int ct;
        cin>> fn>> ln >>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : m){
        // auto &fullname = pr.first;
        // auto &list= pr.second;
        // cout<< fullname.first << " "<< fullname.second <<" "<< list.size() << endl;   or,
        cout<< (pr.first).first << " " << (pr.first).second  << " "<< pr.second.size()<< endl;
        // pr.second[0];   // vector ka element
        for(auto &ele : pr.second){
            cout<< ele << " ";
        }
        cout<< endl;
    }

    return 0;
}