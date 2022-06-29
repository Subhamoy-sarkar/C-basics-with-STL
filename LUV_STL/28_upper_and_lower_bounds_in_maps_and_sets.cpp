#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    set<int>s;
    map<int, int> m;
/*IMP:
in case of map , lower and upper bounds sirf keys pe applied hote hei   
*/
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
        // s.insert(rand());  random no. generates
    }
    // auto it=upper_bound(s.begin(),s.end(),45);    --> O(n) , preferred not to use as, its time complexity is high , alternative:
    auto it=s.upper_bound(25);                     // --> O(log(n))
    cout<< (*it)<<endl;

    return 0;
}