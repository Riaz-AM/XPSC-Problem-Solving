#include <bits/stdc++.h>
using namespace std;
 
string s(const string& b) {
    set<char> Myset(b.begin(), b.end());
    string r(Myset.begin(), Myset.end());
    sort(r.begin(), r.end());
 
    map<char, char> mapping;
    int len = r.size();
    for (int i = 0; i < len; ++i) {
        mapping[r[i]] = r[len - 1 - i];
    }
 
    string a;
    for (char c : b) {
        a.push_back(mapping[c]);
    }
 
    return a;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string b;
        cin >> n >> b;
        cout << s(b) << "\n";
    }
 
    return 0;
}