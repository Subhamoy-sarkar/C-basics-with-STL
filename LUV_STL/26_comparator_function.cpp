#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        /*
        if (a.first > b.first)
            // return true;   --> for user defined comparatr functn
            return false;         // for inbuilt comparator functn in sort we have to return false for swapping that's why
        return true;
            // return false    --> for user define compartr functn
        */

       // or, IMP:
        //jis order mei chahiye wohi likh do , for inbuilt comparatr:
        return a.first<b.first;
    }
    else
    {
        /*
        if (a.second < b.second) 
            // return true;   --> for user defined comparatr functn  ,for desired result
            return false;
        return true;
        */
        return a.second>b.second;
    }
}
// for int datatypes:
// bool cmp(int a, int b){
//     return a>b;
// }
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (should_i_swap(a[i], a[j]))        // should_i_swap is comparator functn
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    // method to use in-built comparator functn in sorting function:
    sort(a.begin(),a.end(),should_i_swap);      // ye wala comprtr functn bolta hei,ki agar tmhe swap karna hei toh false return and agr nhi karna swap toh true return karo 

    // inbuilt comprtr:
    // sort(a.begin(),a.end(),greater<pair<int,int>>());
    for (auto &i : a)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}