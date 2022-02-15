#include<iostream>
using namespace std;
int glo = 10;                               // global variable
void sum(){                         
    cout<<glo;             // it will first check for any local var. inside sum()_func, then it will look for global variable    
}
int main(){
    int glo=3;                             // --> local variable 
    glo=42;                  // it will only update local variable 
    
    sum();                   // function call , will go to sum()_function

    cout<<glo;                 // ***temp***, it will give preference to local variable ............precedence local var. lega

    return 0;
}
