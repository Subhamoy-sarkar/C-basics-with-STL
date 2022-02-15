#include<iostream>
#include<vector>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k,i,j;
    cin >> n >> q;
    vector<vector<int> >arr(n);
    for (i=0; i<n; ++i){
        cin >> k;
        arr[i].resize(k);
        for(j=0 ; j<k; ++j){
            cin >> arr[i][j];
        }       
    }

    for(int l=0; l<q; ++l){
        cin >> i >> j;
        cout << arr[i][j]<<endl;
    }  
        
    return 0;
}

/*  Not an optimal solution coz it can only pass 2 test, but it can give you an idea of variable array which stores other arrays at its index points: 

#include<iostream>
using namespace std;
int main(){
    int n,q,s=0;
    cin>>n>>q;
    int *arr[n];
    while(n--){
        int num;
        cin>>num;
        arr[s]=new int(num);
        for(int i=o;i<num;i++){
            cin>>arr[s][i];
        }
        s++;
    }
    while(q--){
        int a,b;
        cin>>arr[a][b];
    }
}