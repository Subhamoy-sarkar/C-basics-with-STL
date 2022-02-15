#include<iostream>
#include<climits>
using namespace std; 

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;   //INT_MIN -> means c++ mei sabse chota integer value
    int minNO=INT_MAX;

    for(int i=0;i<n;i++){
        if (arr[i]>maxNo){
            maxNo=arr[i];   
        }
        //Built-in function for max, min :
        // maxNo=max(maxNo,arr[i]);  maxNo and arr[i] ko compare karega aur unme se jo max hoga uski value ko set karega;
        // minNO=min(minNO,arr[i]);
        if(arr[i]<minNO){
            minNO=arr[i];
        }
    }
    return 0;
}