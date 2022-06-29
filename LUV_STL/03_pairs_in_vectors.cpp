#include<bits/stdc++.h>
using namespace std; 
void printVec(vector<pair<int, int>> &v){
    for(int i=0;i<v.size();i++){
        cout<< v[i].first <<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int>> v={{23,23},{32,55}};
    // printVec(v);
    int n;
    cin>>n;
    vector<pair<int ,int>> vecp;
    //taking input from user:
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vecp.push_back(make_pair(x,y));   
        // or,  vecp.push_back({x,y});
    }
    printVec(vecp);
    return 0;
}