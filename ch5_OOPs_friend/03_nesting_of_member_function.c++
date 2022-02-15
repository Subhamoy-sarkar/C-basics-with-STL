#include <iostream>
#include <string>
using namespace std;
class binary
{
    // private:       // by default class members pvt hote hei
    string s;

public:
    void read(void);
    void chk_bin(void);        // chk_bin --> check binary
    void ones_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);// means(exit with error code 0  // yeh likhne se for every index , bar bar incorrect binary format print nahi hoga,
        }            //  .. sirf ek baar hi print hoga ,aur wo bhi jab pura loop khatam ho jayega( means entered no. fully checked)
                   
                    //**IMP** : exit(0)agr perform ho gaya , toh baki ke function call run nahi honge , program stop ho jayega ..
                    // isliye hi below wale else statement ko green kar diya kyunki agr wo perform ho gaya toh baki ke
                    // function(methods) call/run nahi ho rahe thee
        // else
        // {
        //     cout << "Correct binary format" << endl;
        //     exit(0);
        // }
    }
}
void binary::ones_compliment(void)
{   chk_bin();                                          // ***NESTING***
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout <<"Showing your binary No."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();        
    b.display();         // Your original binary no. (before swaping 1 & 0 with each other)
    b.ones_compliment(); // (function for swaping 1 & 0 with each other)
    b.display();         // ( your binary no. after swaping 1 & 0 with each other)
    return 0;
}