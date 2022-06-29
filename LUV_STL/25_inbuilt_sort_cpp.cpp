#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);    // O(nlog(n))        // inbuilt sorting function cpp stl   --> intro sort (quick sort , heap sort , insertion sort ) ,, one of the   best sorting algorithms...
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
    // sort(a.begin(),a.end()); in case of vectors
    return 0;
}