#include<iostream>
using namespace std; 
int main(){
    // array example:-
    int marks[4]={232,32,34,23};    // or you can use int marks[] ...
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    cout<<"These are physics marks !!"<<endl;
    int phymarks[4];
    phymarks[0]=233;
    phymarks[1]=2321;
    phymarks[2]=33;
    phymarks[3]=990;

    cout<<phymarks[0]<<endl;
    cout<<phymarks[1]<<endl;
    cout<<phymarks[2]<<endl;
    cout<<phymarks[3]<<endl;

    // you can change values of an array
    cout<<marks[2]<<endl;
    marks[2]=32;
    cout<<marks[2]<<endl;

    for(int i=0; i<4 ;i++){
        cout<<"The value of marks "<<i+1<<" is :"<<marks[i]<<endl;
    }

    return 0;
}