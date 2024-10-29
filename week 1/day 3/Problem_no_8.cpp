#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count;
    cin >> n >> count;
    
    map<string, string> m;
    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        m[b] = a;
    }
    
    for (int i = 0; i < count; ++i) {
        string cmd, s;
        cin >> cmd >> s;
        string b = s.substr(0, s.size() - 1);
        cout << cmd << " " << s << " #" << m[b] << endl;
    }
    
    return 0;
}