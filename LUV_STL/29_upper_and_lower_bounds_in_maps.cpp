#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*IMP:
    in case of map , lower and upper bounds sirf keys pe applied hote hei
    */
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        m.insert({a, b});
    }
    auto it = m.lower_bound(42);
    cout << (*it).first << " " << (*it).second << endl;
    return 0;
}