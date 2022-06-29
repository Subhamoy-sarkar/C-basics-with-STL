#include<bits/stdc++.h>
using namespace std; 
void printVec(vector< int> &v){
    for(int i=0;i<v.size();i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;
}
int main(){
    int n;   
    cin>>n;
    vector<vector<int>>v;  // IMP, here v is storing vectors 
    for(int i=0;i<n;i++){
        cout<<"Enter size of vector :";
        int sizev;
        cin>>sizev;
        vector<int>temp;
        // or, v.push_back(vector<int> ()); , then use v[i].push_back in place of temp.push_back, becoz v[i] vector now exist
        for(int j=0;j<sizev;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);  // storing temp vector in v vector
        // printVec(v[i]);
    }
    vector<int> temp={32,424,453253,232};
    v.push_back(temp);                     // this proves , both rows and columns of v are dynamic, not static
    v[0].push_back(777777);           // v[0] vector mei jo vector stored hei, uske piche 77777 as element add ho jayega;
    for(int i=0;i<v.size();i++){
        printVec(v[i]);
    }
    return 0;
}