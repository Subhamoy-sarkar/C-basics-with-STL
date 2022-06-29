/*
printing the next greater elements of all the elements :
e.g :  arr[]={4,5,2,24,7,8}
here, 4 ka next greater(ng) element is 5 , so print 5, then 5 ka ng 24 , then 2 ka ng 24, 24 has no ng so, -1 , then 7 ka ng 8, then 8 ka no ng , so -1

so , output:   5 24 24 -1 8 -1

in general we can achieve this by using two for loops , so complexity : O(n^2)
but by stacks, we can do this in complexity : O(n)
*/

// Hackerrank question :
#include<bits/stdc++.h>
using namespace std; 
vector<int> NGE(vector<int>v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();++i){
        while (!st.empty()  && v[i]>v[st.top()])
        {
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> nge=NGE(v);
    for(int i=0;i<n;i++){
        cout<< v[i] << " " << (nge[i]==-1 ? -1 : v[nge[i]] ) << endl;
    }
    return 0;
}