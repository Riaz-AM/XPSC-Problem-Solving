#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
    
    map<string, string> s1;
    map<string, string> s2;
    
    for (int i = 0; i < q; ++i) {
        string a, b;
        cin >> a >> b;
        
        if (s1.find(a) == s1.end()) {
            s1[b] = a;
            s2[a] = b;
        } else {
            string v = s1[a];
            s1[b] = v;
            s2[v] = b;
        }
    }
    
    cout << s2.size() << endl;
    for (auto entry : s2) {
        cout << entry.first << " " << entry.second << endl;
    }
    
    return 0;
}