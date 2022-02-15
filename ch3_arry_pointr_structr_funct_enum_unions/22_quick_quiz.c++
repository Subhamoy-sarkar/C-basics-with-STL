#include<iostream>
using namespace std; 

int main(){
    int i=0;
    int marks[5]={99,97,91,84,83};
    // while(i<5){
    //     cout<<"The marks of subject no."<<i+1<<" is :"<<marks[i]<<endl;
    //     i++;
    // }
    do{
        cout<<"The marks of subject no."<<i+1<<" is :"<<marks[i]<<endl;
        i++;
    }while(i<=4);
    return 0;
}
