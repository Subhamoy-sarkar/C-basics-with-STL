#include<iostream>
using namespace std; 
class employee{
    int id;
    int salary;
    public :
        void setId(void){
            salary =32000;                                  // yeh salary har employee ke liye set ho gayi
            cout<<"Enter Id of an employee"<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of this employee is :"<<id<<endl;
        }
};

int main(){
    employee subho, rohan , harry , shruti;
    harry.setId();
    harry.getId();
    employee fb[4];                                         // fb company ke employee.. array in objects
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}