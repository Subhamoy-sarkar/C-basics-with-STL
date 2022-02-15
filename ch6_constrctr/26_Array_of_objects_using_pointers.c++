#include<iostream>
using namespace std; 
class shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id=a;
            price=b;
        }
        void getData(){
            cout<<"The id of this item is "<<id<<endl;
            cout<<"The price of this item is "<<price<<endl;
        }
};
int main(){
    int size=2;
    shop *ptr= new shop[size];  // memory to store 3 blocks of object of shop class are allocated , and 1st block is pointed to ptr
    // shop *ptrnew = *ptr , you have to use *ptrnew pointer in the second forloop if you use ptr++ in first for loop , 
    int p,q;
    for (int i =0; i<size; i++)
    {
        cout<<"Enter Id and price of item"<<i+1<<endl;
        cin>>p>>q;
        (ptr+i)->setData(p,q);
    }
    for(int i=0;i<size;i++){
        cout<<"Item number: "<<i+1<<endl;
        (ptr+i)->getData();
    }
    

    return 0;

}