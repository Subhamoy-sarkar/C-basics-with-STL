#include<iostream>
using namespace std; 
class shop{
    int itemId[50];        // maxm 50 items 
    int price[50];
    int counter;
    public:
        void initcounter(void){counter=0;}  // initializes value of counter to 0(counter==0) for every new object
        void setprice(void);
        void displayprice(void);
};
void shop :: setprice(void){                       
    cout<<"Enter id of your item no."<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>price[counter];
    counter++;
}
void shop :: displayprice(void){
    for(int i=0; i<counter; i++){
        cout<<" The price of item with Id "<<itemId[i]<<"is"<<price[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}