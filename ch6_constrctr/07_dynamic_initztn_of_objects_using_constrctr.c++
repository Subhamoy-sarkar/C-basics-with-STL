#include<iostream>
using namespace std; 
// dynamically means- jab program run ho raha hei tab. , dynamically init obj with const- matlb program run hua , user ne input diya uske baad yeh pata chalega ki kaunsa constructor run hoga 
class deposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
        deposit(){}  // blank constructor dena padta hei taki, agr p,y,z in sab ki values na bhi de toh bhi object taiyaar ho jae
        deposit(int p, int y,float z);  // z can be a value like 0.04
        deposit(int p, int y, int z); // z can be a value like 4
        void show();
};
deposit::deposit(int p,int y ,float z){
    principal=p;
    years=y;
    interestRate=z;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue *= (1+interestRate);
    }
    
}
deposit::deposit(int p,int y ,int z){
    principal=p;
    years=y;
    interestRate=float(z)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue *= (1+interestRate);
    }

}
void deposit::show(){
    cout<<endl<<"Principal amount was "<<principal<<" and Return value after "<<years<<" years is : "<<returnValue<<endl;
}
int main(){
    deposit b1 ,b2,b3;  //yeh ek ab datatype ban gaya  // inko init karane ke liye , blank constrct banana padega, i.e in line 10  
    int p,y;
    float r;
    int R;
    
    cout<<"Enter the value of p y and r(in floating datatype plz) respectively "<<endl;
    cin>>p>>y>>r;
    b1=deposit(p,y,r);
    b1.show();

    cout<<"Enter the value of p y and r(in int datatype plz) respectively "<<endl;
    cin>>p>>y>>R;
    b2=deposit(p,y,R);
    b2.show();

    // b3.show(); will give garbage value
    return 0;
}