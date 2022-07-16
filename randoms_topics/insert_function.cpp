#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector<int>v;
    v.insert(v.end(),3,134);
    v.insert(v.end(),4,111);
    for(auto &i:v) cout<<i<<" ";
    // vector_name.insert(position, size, val)

/*
    position – It specifies the iterator which points to the position where the insertion is to be done.
    size – It specifies the number of times a val is to be inserted at the specified position.
    val – It specifies the value to be inserted.
*/
    return 0;
}