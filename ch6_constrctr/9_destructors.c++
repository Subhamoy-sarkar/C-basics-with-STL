#include<iostream>
using namespace std; 
// destructors didn't take any arguments nor did they return any values;
int count=0;
class num{
    public:
        num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when my destructor is called object number"<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block";
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Existing this block";
    }
    // jab compiler ko lagega ki object ka aur koi kaam nhi hei , toh wo destructor ko call kar dega
    cout<<"Back to main"<<endl;
    return 0;
}