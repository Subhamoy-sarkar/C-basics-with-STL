#include <vector>
#include <iostream>
#include<sstream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int>p;
    stringstream ss(str);
    char c;
    int a;
    while(ss>>a>>c){
        p.push_back(a);
    }
    ss>>a;
    p.push_back(a);
    return p;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
