#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    ofstream out;
    string st,st2;
    out.open("04_sample.txt");
    out<<"This is me \t";
    out<<"This is me also \n";
    out<<"This is me also also \t";
    out.close();

    ifstream in;
    in.open("04_sample.txt");
    // in>>st>>st2;              //st2 1st space ke baad wala word ko lelega
    // cout<<st<<st2;
    
    while(in.eof() ==0){    //eof --> end of file 
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}