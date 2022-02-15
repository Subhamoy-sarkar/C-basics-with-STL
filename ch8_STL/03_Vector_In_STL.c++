#include<iostream>
#include<vector>
using namespace std; 

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
}
int main(){
    // Ways to create vector :

    // 1.)
    vector<int> vec1;  // size apne aap manage karta hei,  zero length integer vector
    // You can check out vector methods here :cpp vector methods
    int element,size;
    // cout<<"Enter the size of the vector: ";
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter an element to add to this vector : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();     // last element ko delete kar dega

    // display(vec1);

    // vector<int>::iterator iter=vec1.begin();    // now iterator=>"iter" will points to the first element of the vector -> "vec1"
    // vec1.insert(iter,334);       // will insert 334 at the beginning(starting of the element list)
    // vec1.insert(iter+2,0);       // will insert 0 at index no. 2( index count starts from 0)
    // vec1.insert(iter+2,6, 0);    // will insert 6 zeros(0) starting from  the index no. 2, irrespective of the size of vector

    // cout<<"you: "<<vec1.at(2);      // will print the element at the index no. 2 

    // display(vec1);


    // 2.)
    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('3');
    // display(vec2);
    

    // 3.)
    vector<char> vec3(vec2);  // 4-element character vector from vec2
    

    // 4.)
    vector<int> vec4(6,3); // 6-element vector of 3s
    display(vec4);         // will print 3 , 6 times
    cout<<vec4.size();      

    return 0;
}