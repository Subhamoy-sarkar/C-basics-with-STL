#include<iostream>
using namespace std; 

int main(){
    enum Meal{breakfast, lunch, dinner};     // ye ek datatype ban gaya , 0 no. pe breakfast store ho gaya ,1 pe lunch and so on..
    cout<<breakfast<<endl;   // 0 mei breakfast
    cout<<lunch<<endl;       //  1 mei lunch ...and so on 
    cout<<dinner<<endl;
    Meal m1=breakfast;
    cout<<m1<<endl; 
    Meal m2=lunch;
    cout<<m2<<endl;       // will give 1 as , lunch is stored in index no. 1 ... 

    // comparing;
    cout<<(m1==0);        // 0 for false, 1 for true 

    
    return 0;
}