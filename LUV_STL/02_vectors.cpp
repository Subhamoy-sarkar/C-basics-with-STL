#include<bits/stdc++.h>
using namespace std;
// IMP: if you declare a array / vector locally , you can set maximum size to 10^5 and if you declare globally , you can set upto 10^7 , this limit is not in the datatype vect or array, it is on  continuous memory allocation ;

void print(vector<int> v){     // copy of v is in making (O(n)), agr aap isse bachna chahte hei, toh reference (&v) use kare, 
    // v.size()  -> O(1)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int>a;  
    int n;
    cin>>n;
    for(int  i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);    // O(1)
    }
    print(a);
    cout<<endl;

    vector<int> v(5);
    print(v);   // all the 5 values will be defined value, i.e zero(0);
    v.push_back(232);   // you can still add elements in vector v 
    cout<<endl;
    print(v);

    vector<int>e(5,32);   // all the 5 values will be 32 
    e.push_back(343);
    print(e);

    v.pop_back();   // last value ko delete karega    , O(1)

    // copying one vector to another:   ( changes in new vector ( v2 ), will not reflect in the parent vector )
    vector<int> v2=v;   // O(n)  **IMP**
    // print(v2);
    // for reference vector, use &v2=v, changes in v2 will be reflect in v1

    // inserting an element at a specific position :
    v.insert(v.begin(),24);    // 24 is the element
    cout<<v[0];

    
    return 0;
}

