<<<<<<< HEAD
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main(){
    //// Declaring a string datatype str: 

    // string str;  
    // cin>>str;    //without spaces
    // cout<<str;   //will not print anything after a space 
    //  or,    

    // string str(5,'s');
    // cout<<str;           // will print s five times

    // string str="Subhamoysarkar";
    // cout<<str;

    ////Getline function:
    // string str;
    // getline(cin,str);   // you can now give spaces between string
    // cout<<str<<endl;

    //// Appending strings: 
    // string s1="subhamoy",s2="sarkar";
    // s1.append(s2);    // s1 mei s2 jodd diya;  or,   s1=s1+s2;
    // cout<<s1<<endl;
    // // or,
    // cout<<s2+s1<<endl;   //simplest and **IMP**

    //// Accessing elements with their Index no. ;
    // string str="fisjiwejiwjijfwjf sffsdk  fsdkjfs sdfsjw";
    // cout<<str[2]<<endl;             
    // cout<<str<<endl;
    ////Clear function to clear the contents of a string: 
    // cout<<str<<endl;
    // str.clear();
    // cout<<str<<endl;

    //// Comparing strings : 
    // string s="sfwjfiow",u="jfijiwf";
    // cout<<s.compare(u)<<endl;    // +ve --> s>u , -ve--> s<u , 0 --> both strings (s and u ) are equal 

    ////Empty function:
    // string s="sjoiw";
    // cout<<s<<endl;
    // s.clear();
    // if(s.empty()){
    //     cout<<"string s is empty";
    // }

    //// erasing elements from a string:
    // string s="subhwtwamoy";
    // s.erase(4,3);             // here, (index no. from where to start erasing, no. of elements to erase after the index no. mentioned)
    // cout<<s<<endl;

    // removing last element from string:
    // s.pop_back();

    // Finding elements starting index:
    // string s1="jdikesubamoyfsiow";
    // cout<<s1.find("subamoy")<<endl;    //will return the index no.
    
    // Insert function:
    // string s="subhamoygood";
    // s.insert(4,"lololo");    //will insert the given string lololo in index no. 4;
    // cout<<s<<endl;

    //length of a string :
    // string s="sjwoijfw";
    // cout<<s.length()<<endl; // or s.size()
    // for(int i=0;i<s.length();i++){         // iterating a sting
    //     cout<<s[i]<<endl;
    // }

    // Substring:
    // string s="jfwijfwewfwf";
    // string s1=s.substr(3,8);   //3 index no. , 8 is the no. of elements taken
    // cout<<s1<<endl;

    //String to integer and vice-versa:
    // string s="123144";
    // int x=stoi(s);   //string to integer conversion
    // int x=stoi(s[0]); IMP , can't do this it will give error, instead store individual values in char, then typecast it to int, and subtract it with -48 to get the integer value (48 is ASCII value of z):
    // eg: char c =s[i];
    //     int a=int(c)-48;
    // cout<<x+4<<endl;

    // int x=3432;
    // cout<<to_string(x)+"34"<<endl;  //int to string conversion, here 34 will be appended to string

    //Sorting a string (you will need #include<algorithm> for this)
    string s="fwoiwfisjfinccnsjreoaaaliaufkcjn";
    sort(s.begin(),s.end());
    cout<<s<<endl;   //alphabetically sorted

    //Reversing the string:
    reverse(s.begin(),s.end());
    // or,
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;i--){
        str_rev.push_back(str[i]);                                          // O(1) 
        // or, str_rev+=str[i];  (not preferred one,because time complexity= O(str_rev.size())  )
    }

    //Palindrome string check:
    if(str==str_rev){
        cout<<"String is palindrom"<<endl;
    }

    // Dealing with large numbers:
    string num;
    cin>>num;
    int last_digit=num[num.size()-1]-'0';
    cout<< last_digit;
    cout<<s<<endl;
=======
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 

int main(){
    //// Declaring a string datatype str: 

    // string str;  
    // cin>>str;    //without spaces
    // cout<<str;   //will not print anything after a space 
    //  or,    

    // string str(5,'s');
    // cout<<str;           // will print s five times

    // string str="Subhamoysarkar";
    // cout<<str;

    ////Getline function:
    // string str;
    // getline(cin,str);   // you can now give spaces between string
    // cout<<str<<endl;

    //// Appending strings: 
    // string s1="subhamoy",s2="sarkar";
    // s1.append(s2);    // s1 mei s2 jodd diya;  or,   s1=s1+s2;
    // cout<<s1<<endl;
    // // or,
    // cout<<s2+s1<<endl;   //simplest and **IMP**

    //// Accessing elements with their Index no. ;
    // string str="fisjiwejiwjijfwjf sffsdk  fsdkjfs sdfsjw";
    // cout<<str[2]<<endl;             
    // cout<<str<<endl;
    ////Clear function to clear the contents of a string: 
    // cout<<str<<endl;
    // str.clear();
    // cout<<str<<endl;

    //// Comparing strings : 
    // string s="sfwjfiow",u="jfijiwf";
    // cout<<s.compare(u)<<endl;    // +ve --> s>u , -ve--> s<u , 0 --> both strings (s and u ) are equal 

    ////Empty function:
    // string s="sjoiw";
    // cout<<s<<endl;
    // s.clear();
    // if(s.empty()){
    //     cout<<"string s is empty";
    // }

    //// erasing elements from a string:
    // string s="subhwtwamoy";
    // s.erase(4,3);             // here, (index no. from where to start erasing, no. of elements to erase after the index no. mentioned)
    // cout<<s<<endl;

    // Finding elements starting index:
    // string s1="jdikesubamoyfsiow";
    // cout<<s1.find("subamoy")<<endl;    //will return the index no.
    
    // Insert function:
    // string s="subhamoygood";
    // s.insert(4,"lololo");    //will insert the given string lololo in index no. 2;
    // cout<<s<<endl;

    //length of a string :
    // string s="sjwoijfw";
    // cout<<s.length()<<endl; // or s.size()
    // for(int i=0;i<s.length();i++){         // iterating a sting
    //     cout<<s[i]<<endl;
    // }

    // Substring:
    // string s="jfwijfwewfwf";
    // string s1=s.substr(3,8);   //3 index no. , 8 is the no. of elements taken
    // cout<<s1<<endl;

    //String to integer and vice-versa:
    // string s="123144";
    // int x=stoi(s);   //string to integer conversion
    // cout<<x+4<<endl;

    // int x=3432;
    // cout<<to_string(x)+"34"<<endl;  //int to string conversion, here 34 will be appended to string

    //Sorting a string (you will need #include<algorithm> for this)
    string s="fwoiwfisjfinccnsjreoaaaliaufkcjn";
    sort(s.begin(),s.end());
    cout<<s<<endl;   //alphabetically sorted
    //Reversing the string:
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
>>>>>>> 408bfee0d6e8e0f6408e165e41ccd752b4291978
}