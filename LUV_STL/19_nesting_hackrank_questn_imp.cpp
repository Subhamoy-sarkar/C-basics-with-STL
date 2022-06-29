#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }
    auto cur_itr = --marks_map.end();
    while (true)
    {
        auto &students = (*cur_itr).second;
        int marks= (*cur_itr).first;
        for(auto &student : students){
            cout<< student << " " << marks <<endl;
        }
        if(cur_itr==marks_map.begin()) break;
        cur_itr--;
    }

    return 0;
}