#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);       // sorting is compulsory in this Lower and upper bound                      
    // sort(v.begin(),v.end()); // for vectrs 
     
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
/* 
Lower Bound: if you want to find an element , if that element is present , it will select that element, else if not present, it will   select the greater element than the element selected...(it will return pointer(in case of arrays) and iterators (in case of vectrs))
*/
/*
Upper Bound: if you want to find an element, irrespective of element is present or not in the collection , it will select greater element than the one you want to find   

they both  will return pointer(in case of arrays) Or, iterators (in case of vectrs) 
*/
    int *ptr=lower_bound(arr,arr+n,5);    // log(n)
    // auto it= upper_bound(v.begin(),v.end(),45) ;           for vectors

    if(ptr==(arr+n)){               // (it==v.end())   for vectors
         // if you select an element ,of which there are no (equal to) and  (greater element) in  the collection , then it will point to the next pointer after the last element 
        cout<< "NOt found" <<endl;
        return 0;
    }
    cout<< (*ptr)<<endl;
    // cout<<(ptr-arr);                   // will give index of the upper bound
    // cout<<(itr-v.begin());             // will give index of the upper bound

    int *pt=upper_bound(arr, arr+n,5);   // log(n)
    if(pt == arr+n){
        // if you select an element, of which there are no (greater element) in the collection then it will point to the next pointer after the last element 
        cout<<"NOt found"<< endl;
        return 0;
    }
    cout<<(*pt) <<endl;
    return 0;
}