#include<iostream>
#include<list>
using namespace std; 
    // list is a container , which is used to store data. It is a bidirectional linear list hei, jo ki insertion and deletion ke liye effecient operation dikhati hei
    // linked list is a data structure
    // jab aapko insertion and deletion fast chahiye toh aap list use karo, aur aagr apko faster access chahiye toh array use karo

void display(list<int> &lst){
    list<int> :: iterator i;
    for(i=lst.begin();i !=lst.end();i++){
        cout<<*i<<" ";
    } 
    cout<<endl;
}
int main(){
    list<int> list1;    // List of 0 length
    list1.push_back(23);
    list1.push_back(34357);
    list1.push_back(33);
    list1.push_back(3302);
    list1.push_back(3367);

    // Removing elements from a list(list1): 
    // list1.pop_back();    //last se ek element ko nikal /delete kar dega   
    // // list1.pop_back();    //ab jitna list1 mei elements bacha hua hei, unme se last se ek element ko nikal /delete kar dega      
    // list1.pop_front();     // front se ek element ko nikal lega/ delete kar dega
    // list1.remove(23);      // jo element aap mention karoge uski saari occurence ko list se remove/delete kar dega 

    // Sorting elements in a list(list1):
    // list1.sort();      // will sort the elements of list1 in ascending order
    // display(list1); 

    // Reversing the list:
    list1.reverse();       // it's not in descending order , it's only in reverse order ;
    display(list1);

    // iterating list1:
    // list<int> :: iterator iter;
    // iter=list1.begin();       // now iterator=>"iter" will points to the first element of the list -> "list1"
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";


    list<int> list2(3);   // Empty list of size 3
    list<int> ::iterator it;
    it=list2.begin();
    *it=2343;
    it++;
    *it=23334;
    it++;
    *it=0;
    it++;
    display(list2);

    // Merging elements of 2 lists(list1 and list2 in list1):
    list1.merge(list2);
    cout<<"List1 After merging : "<<endl;
    // display(list1);

    // sorting + merging (of list1 and list2 in list1): 
    list1.sort();
    list2.sort();
    list1.merge(list2);
    // display(list1);
    return 0;
}