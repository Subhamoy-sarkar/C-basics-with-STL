#include<iostream>
using namespace std; 
inline int prd(int a, int b){
    return a*b;
}
int main(){
    // inline functn,is not a command to compiler,its a request to compiler ,it will run only if valid/accepted by compiler
    int a=323,b=232;
    // INLINE FUNCTION : iss function se compiler, function call ko function code se replace kar deta hei (during compile time)
    // jisse, agr ek hi function ko bar bar call kar rahe ho, toh bar bar copy , value return wala cycle repeat nhi hoga
    // offcourse output pe koi asar nhi padega , TIME TAKEN TO EXECUTE THE CODE DECREASES  but very less
    cout<<"The product of a and b is :"<<prd(a,b)<<endl; 
    cout<<"The product of a and b is :"<<prd(a,b)<<endl;   
    cout<<"The product of a and b is :"<<prd(a,b)<<endl;
    cout<<"The product of a and b is :"<<prd(a,b)<<endl;
    cout<<"The product of a and b is :"<<prd(a,b)<<endl;// inline function use karne par a*b(function code) direct function call(prd(a,b))
    //.. pe aa gaya(ya replace kar diya),isse bar bar copy ,then return value ka cycle se chutkara mila aur easily code run hua.
    
    // WHEN TO USE : jab function ke andar bahut kam kaam ho raha hei(small code), aur functn call bahut baar ho raha hei, 
    // tab inline function use kar sakte ho..

    // WHEN NO TO USE : agr functn ke andar bahut bada code hoga aur , bahut baar functn call hua , toh inline use mat karna 
    // kyunki , isse cash memory mei jagah nahi bachegi , kyunki har baar wo code jo ki bahut bada hei
    // wo replace karta jayega functn call ko ,aur isse bahut memory use hoga
    // RECURSION , STATIC VARIABLES , etc.  ke time isko use nahi karna chahiye
    // looops  and switch  mei bhi ye recommended nhi hei

    return 0;
}