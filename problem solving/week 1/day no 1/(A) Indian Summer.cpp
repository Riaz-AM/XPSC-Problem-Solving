#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<string> v;
 
    for (int i = 0; i < n; ++i) {
        string s, c;
        cin >> s >> c;
        string l = s + " " + c;
 
        if (find(v.begin(), v.end(), l) == v.end()) {
            v.push_back(l);
        }
    }
 
    cout << v.size() << endl;
 
    return 0;
}