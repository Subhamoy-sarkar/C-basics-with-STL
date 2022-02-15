#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    // Connecting out file with out stream: 
    ofstream out("03_sample.txt");

    // Creating a name string and filling it with the string entered by the user:
    cout<<"enter your name : ";
    string name;
    cin>>name;

    // Writing a string to the file :
    out<<name;

    // Closing the file: 
    out.close();

    ifstream in ("03_sample.txt");
    string content;
    // in>>content;
    getline(in,content);
    cout<<"The content of this file is : "<<content<<endl;
    in.close();

    return 0;
}