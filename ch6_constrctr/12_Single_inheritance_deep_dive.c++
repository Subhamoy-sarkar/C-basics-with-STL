// if derived class visibility is public:

// #include<iostream>
// using namespace std; 
// class base{
//     int data1; // private by default and is not inheritable
//     public:
//         int data2;
//         void setData();
//         int getData1();
//         int getData2();
// };
// void base :: setData(){
//     data1=34;
//     data2=44;
// }
// int base:: getData1(){
//     return data1;
// }
// int base:: getData2(){
//     return data2;
// }
// class derived:public base{   //Class is being derived publicly
//     int data3;
//     public:
//         void process();                    
//         void display();
// };
// void derived:: process(){
//     data3=data2*getData1();
// }
// void derived:: display(){
//     cout<<"value of data1 is "<<getData1()<<endl;
//     cout<<"value of data2 is "<<data2<<endl;
//     cout<<"value of data3 is "<<data3<<endl;
// }
// int main(){
//     derived der;
//     der.setData();
//     der.process();
//     der.display();
//     return 0;
// }

//if derived class visibility is private:

#include<iostream>
using namespace std; 
class base{
    int data1; // private by default and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void base :: setData(){
    data1=34;
    data2=44;
}
int base:: getData1(){
    return data1;
}
int base:: getData2(){
    return data2;
}
class derived:private base{   //Class is being derived publicly
    int data3;
    public:
        void process();                    
        void display();
};
void derived:: process(){
    setData();
    data3=data2*getData1();
}
void derived:: display(){
    cout<<"value of data1 is "<<getData1()<<endl;
    cout<<"value of data2 is "<<data2<<endl;
    cout<<"value of data3 is "<<data3<<endl;
}
int main(){
    derived der;
    // der.setData();  you can't access setData() functn as visibility of derived class is private ..
    der.process();
    der.display();
    return 0;
}