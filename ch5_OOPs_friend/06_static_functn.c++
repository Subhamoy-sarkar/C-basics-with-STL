#include<iostream>
using namespace std; 
// static function can access only--> all the static variables, no other access
class employee
{
    static int count; 
    int id;

public:
    void setdata(void)
    {
        cout << "Enter the Id " << endl;
        cin >> id;
        count++;
    }
    void getdate(void)
    {
        cout << "The id of the employee is : " << id << " and the employee no. is :" << count << endl;
    }
    static void getcount(void){                 // static function 
        cout<<"The value of count is :"<<count<<endl;
        // cout<<id<<endl;                : error as its static function and it can't access id
    }
};
int employee::count; 

int main()
{
    employee harry, subho, rohan, dark;
    harry.setdata();
    harry.getdate();
    employee::getcount();           // direct run , no object reference is needed here,.
    return 0;
}