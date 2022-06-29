#include<iostream>
#include<vector>
using namespace std; 

int main(){
    pair<int,string>p,j;
    p=make_pair(2,"a");  //inbuilt function  to initialise value of pairs;
    j= {2,"abc"};
    cout<< p.first <<" "<< p.second<<endl;
    cout<< j.first<<" "<<j.second<<endl;

    // copy value of one pair to another pair datatype : 
    pair<int ,string> p1=p;                                 // O(n) ig
    cout<<p1.first<<" "<<p1.second<<endl;
    p1.first=32;
    cout<< p.first<<" "<<p.second<<endl;   // here , the value of p.first doesn't change because , only a copied value is passed to p1 

    // passing value of one pair to another by reference:
    pair<int,string> &p2= p;
    p2.first=323;
    cout<< p.first<<" "<<p.second<<endl;     // here , the value of p.first change because , only reference of p is passed  to p1 
    
    int a[]={322,2323,23532};
    int b[]={32,424,45235};
    pair<int, int> p_array[3];
    p_array[0]={32,2324};
    p_array[1]={232,424};
    p_array[2]={2324,4242442};

    // printing the paired array:
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<< p_array[i].first<<" "<< p_array[i].second<<endl;
    }
    cout<<endl;
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<< p_array[i].first<<" "<< p_array[i].second<<endl;
    }

    // taking input for pairs:
    pair<int, int> arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
}