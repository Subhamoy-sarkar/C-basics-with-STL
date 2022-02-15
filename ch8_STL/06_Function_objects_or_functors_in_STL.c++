#include<iostream>
#include<algorithm>
#include<functional>
using namespace std; 

int main(){
    //Function objects (functor) : Function wrapped in a class , so that it is available like an object
    int arr[]={13,35,4,125,54,77};
    // sort(arr, arr+5);         // here , 5 means , upto fifth element sorting will be done ,in ascending order
    sort(arr,arr+6,greater<int>());   // upto element 6th , arr will be sorted in descending order | here , function object is passed greateer<int>() through sort method; 
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }

    // you can explore more algorithms in cppreference  / c plus plus
    return 0;
}