#include <bits/stdc++.h>
// all functions(find, erase, insert) are same as that of ordered maps , order don't matter 
using namespace std;
void printmap(unordered_map<int, string> m)
{
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    /*
        1. Inbuilt implementation  --> use hashtables , ordered maps use trees
        2. Time complexity   // insertion and access : O(1) (avg)
        3. valid keys datatype   --> jyada complex datatypes ko use nahi kar sakte unmaps mei , but ordered maps mei use kar sakte ho 
                                     e.g :    unordered_map < pair<int, int> ,string > m;  
                                               yaha pe use nahi kar sakte kyunki pair, vector, sets , inn sab ka hashfunction define nahi hei  
    */
    unordered_map<int, string> m; //unsorted, random(using hashtables)
    m[2]="sgfwo";   // O(1)
    m[5]="fwoe";
    m[1]="last";
    m[242]="2424";   
    printmap(m);
    auto itr= m.find(5); //O(1)
    cout<<(*itr).first<<" " << (*itr).second<<endl;
    return 0;
}