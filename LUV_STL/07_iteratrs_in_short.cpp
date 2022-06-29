#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector< int> v={23,42,53,5643,64647};
    for(int i=0;i<v.size();i++){
        cout<< v[i] << " ";
    }
    cout<< endl;
    for(int value : v){   // these are called range based loops
        cout << value << " ";  // value mei vector ki values store hongi(copied);
    }
    cout<< endl;

    // for changing actual values :
    for(int &value : v){
        value ++;
    }
    for(int value : v){
        cout<< value <<" ";
    }
    cout<< endl;
    
    vector<pair<int,int> > vp={{34,24},{243,535}};
    for(pair<int,int> &value : vp){
        cout<< value. first << " "<< value. second <<endl;
    }


    // auto a=1;  // auto keyword  dynamically determines datatype of a 
    // cout<< a;

    for(auto &a: vp){
        cout<< a.first << " "<< a.second<< endl;
    }
    // auto in iterators :
    for(auto it = v.begin(); it!= v.end();it++){
        cout<< (*it) << " "<<endl;
    }
    return 0;
}