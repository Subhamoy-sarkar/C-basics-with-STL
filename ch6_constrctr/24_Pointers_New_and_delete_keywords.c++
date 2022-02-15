#include<iostream>
using namespace std; 

int main(){
    // New Keyword:   
    // (used to dynamically make a variable and initialize it with a value)
    // dynamically new keyword se memory ko allocate karna
    int *ptr=new int(40);
    float *ptr1=new float(3.3);
    cout<<"the value at addresss of ptr is "<<*(ptr)<<endl;
    cout<<"the value at addresss of ptr1 is "<<*(ptr1)<<endl;

    int *arr=new int[4];
    arr[0]=23;
    arr[1]=232;
    *(arr+2)=213;
    arr[3]=2334;
    cout<<"The value of arr is "<<arr[0]<<endl;
    cout<<"The value of arr is "<<arr[1]<<endl;
    cout<<"The value of arr is "<<arr[2]<<endl;
    cout<<"The value of arr is "<<arr[3]<<endl;

    // Delete operator:  
    // to  free the dynamically allocated memory , for reusing it for new values
    delete[] arr;
    cout<<"The value of arr is "<<arr[0]<<endl;
    cout<<"The value of arr is "<<arr[1]<<endl;
    cout<<"The value of arr is "<<arr[2]<<endl;
    cout<<"The value of arr is "<<arr[3]<<endl;  // now this all will give garbage value


    return 0;
}