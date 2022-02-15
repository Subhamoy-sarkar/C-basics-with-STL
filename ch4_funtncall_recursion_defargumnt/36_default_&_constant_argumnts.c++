#include<iostream>
using namespace std; 
//defaut arguments : agr apne koi value nhi di, toh default value(in this case=1.04) apko milengi...
//      .. but agr apne di hei(for VIP case = 1.1), toh apki values ko hi function mei use kiya jayega...... 
int moneyreceived(int money,float interest=1.04){
    return money*interest;
}
//*** default arguments ko humesha extreme right mei lagana hei, aur compulsory arguments ko from extreme left se ****
int main(){
    int money=23232;
    cout<<"If you have Rs."<<money<<" in your bank account of SBI, you will receive Rs."<<moneyreceived(money)<<"after 1 years"<<endl;
    cout<<"For VIPs ,If you have Rs."<<money<<" in your bank account of SBI, you will receive Rs."<<moneyreceived(money,1.1)<<"after 1 years ";
    // 1.04 interest means 4% interest and 1.1 interest means 10% interest
    return 0;
}
//CONSTANT ARGUMENTS : values that will not be changed by compiler (even accidentally)
// e.g , int strlen (const char *p)  --> mei sirf length chahta hu string ki , mere string ko mat badal dena 
