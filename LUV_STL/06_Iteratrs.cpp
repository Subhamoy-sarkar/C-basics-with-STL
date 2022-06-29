#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    cout << *(it + 1) << endl;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // it++  --> next iteration  ( useful in maps and sets)
    // it += 1 --> next location ( not useful in maps and sets , as not continuous memory location)

    vector<pair<int, int> > vp={{23,434},{2432,242},{23,543}};
    vector<pair<int,int>> :: iterator itr ;
    for(itr= vp.begin(); itr != vp.end(); itr++){
        cout << (*itr).first << " "<< (*itr).second<<endl;
// or,     cout<< (itr->first) << " " << (itr-> second) <<endl;
    }
    cout<<endl;
    return 0;
}