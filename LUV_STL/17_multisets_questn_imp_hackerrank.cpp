#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies=0;
        for(int i=0;i<k;i++){
            auto last_itr=(--bags.end());  //imp pre_decrement
            long long candy_cnt= *last_itr;
            total_candies+= candy_cnt;
            bags.erase(last_itr);    //O(1)  avg.
            bags.insert(candy_cnt/2);   // O(log(n))
        }
        cout<< total_candies<<endl;
        
    }
    return 0;
}