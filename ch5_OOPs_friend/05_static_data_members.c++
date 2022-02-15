#include <iostream>
using namespace std;
// here count is the static data member of the class employee.
class employee
{
    static int count; // static var. is a class var., visibility - class ke andar, lifetime --> upto termination of programme
    // int count se , init karna padega aur wo 0 se start hoga har object ke liye ., but , static var shared by all the objects
    // static int count=1000;                not permissable, permissable is given on line 24-26
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
};
int employee::count; // means--> mera ek employee class ka variable hei count jisko mei static banana chahta hu..
// yeh ek aisa variable hei jo ek baar memory lega uske baad update hota jayega **** by default value is 0(no need to initialize)***

// int employee :: count=1000;                       ab ye 1000 se initialize hoga

int main()
{
    employee harry, subho, rohan, dark;
    // harry.id=1;
    // harry.count=23;           // cannot do this as id and count are private
    harry.setdata();
    harry.getdate();

    rohan.setdata();
    rohan.getdate();

    subho.setdata();
    subho.getdate();

    dark.setdata();
    dark.getdate();
    return 0;
}