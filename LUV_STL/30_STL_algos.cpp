#include<bits/stdc++.h>
using namespace std; 
// all function/algos in O(n) for array, vectors  ;  for maps sets, O(logn)    {generally}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }

//min max elements algo:     
    int min=*min_element(v.begin(),v.end());     // min_element return pointer/iterator of the minimun element , therefore *min_element gives value of the minimum element
    int max=*max_element(v.begin(),v.end());
    cout<< "minm :"<<min<<" "<<"maxm :"<<max <<endl;

// acumulate algo : ( to find the sum of all elements):
    int sum =accumulate(v.begin(),v.end(),0);            // 0 is the initial sum 
    cout<< "sum : "<< sum << endl;

// count algo : ( to count the number of specific elements in the collection ):
    int ct= count(v.begin(),v.end(),4);      // it will return the count of no. 4 in the vectr
    cout<< "count : "<<ct<<endl;

// find function : ( will return the iterator / pointer of a specific element from the given collection):
    // int element = *find(v.begin(),v.end(),3);
    // cout << element<<endl;   or,
    auto it=find(v.begin(),v.end(),2);
    if(it!=v.end()){
        cout<< (*it) <<endl;
    }
    else {
        cout<< "element not found"<<endl;
    }

// reverse array/string,etc :
    reverse(v.begin(),v.end());
    for(auto it:v){
        cout<< it << " ";
    }
    cout<< endl;

    string s="abcdefghijklmnopqrstuwxyz";
    reverse(s.begin(),s.end());
    cout<< s<<endl;

//  
    return 0;
}