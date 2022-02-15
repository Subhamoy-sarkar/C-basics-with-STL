#include<iostream>
using namespace std; 
class Complex{
    int a , b ;
    public: 
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        // below line means that non_member - sumComplex function is allowed to do anything with class's private parts (members)
        friend Complex sumcomplex(Complex o1, Complex o2);   // declaration          // ***** friend funcnt *****
        // friend functn can be written in private too..
        void printNumber(void){
            cout<<"You number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex sumcomplex(Complex o1, Complex o2){            // without friend functn, it will throw an error as , a, b are private data
//                       and you have to get a permission from class complex to access it
//                        permission will be in form --> friend funct
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));           
    return o3;
}
int main(){
    Complex c1,c2, sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();

    sum=sumcomplex(c1,c2);
    sum.printNumber();
    return 0;
}
/* Properties of friend functions:
1. Not in the scope of class
2. Since it is not in the scope of the class , it cannot be called from the object of that class. 
   e.g -->  c1.sumComplex()== invalid/error
3. Can be invoked without the help of any object
4. Usually contains the objects arguments
5. Can be declared in the inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.membername
    to access any number.

*/