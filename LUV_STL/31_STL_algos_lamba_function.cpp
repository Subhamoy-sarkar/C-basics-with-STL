#include<bits/stdc++.h>
using namespace std; 
// all_of, none_of, any_of   ..... ye saare true false return karte hei 
// can be used for array, vect, etc
bool all_pos(int x){
    return x>0;
}
int main(){
    // [](int x){return x+2;}     -->   lamda function  
    cout<<  [](int x){return x+2;} (2) << endl;
    cout<< [](int x, int y) { return x+y;} ( 42,24) << endl;

    auto sum =[](int x,int y){return x+y;};
    cout<< sum(2,3)<<endl;

    vector<int> v={243,2424,252};

// all_of : 
    cout<< all_of(v.begin(),v.end(),[](int x){return x>0;}) << endl;  // will print 1 if all  elements is >0, else  0
    // or, 
    cout<< all_of(v.begin(),v.end(),all_pos);

// any_of :
    cout<< any_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;  // will print 1 if atlest one element is <0, else 0

// none_of: 
    cout<< none_of(v.begin(),v.end(),[](int x){return x<0;}) << endl; // will print 1 if all elements are not <0 , else 0
    return 0;
}