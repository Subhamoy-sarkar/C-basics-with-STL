#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if ((age<18)&&(age>0)){
        cout<<"You are not allowed to apply for driving license of any type, sorry kid"<<endl;
    }
    else if(age==18){
        cout<<"You are eligible for student driving license only"<<endl;
    }
    else if(age<=0){
        cout<<"Better born first ,  and then start to learn walking  , dumb*** ;"<<endl;
    }
    else{
        cout<<"You are eligible for driving license , congratulation !!!"<<endl;
    }
    return 0;
}