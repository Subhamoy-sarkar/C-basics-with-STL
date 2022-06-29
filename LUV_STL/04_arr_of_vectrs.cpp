#include<bits/stdc++.h>
using namespace std; 
void printVec(vector< int> &v){
    for(int i=0;i<v.size();i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;
}
int main(){
    int n;   // how many vectors you want to make
    cin>>n;
    vector<int>v[n];  // n vectors of 0 size are made;
    for(int i=0;i<n;i++){
        int sizev;
        cout<<"Enter size of vector :";
        cin>>sizev;

        for(int j=0;j<sizev;j++){
            int a;
            cin>>a;
            v[i].push_back(a);
        }
        // printVec(v[i]);
    }
    for(int i=0;i<n+1;i++){
        printVec(v[i]);
    }
    cout<<v[0][0] << " " <<v[1][2]<<endl;
    // NOTE:  it is like a 2d array , where no. of rows are fixed(n) but no. of columns are not fixed , they are dynamic , to make both rows and columns dynamic, we have to learn vectors of vectors
    return 0;
}        