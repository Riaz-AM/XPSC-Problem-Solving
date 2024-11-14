#include <bits/stdc++.h>
using namespace std;

int fun(const string& s) {
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j && s[i] != s[j]) {
        ++i;
        --j;
    }
    return j - i + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << fun(s) << endl;
    }
    return 0;
}
