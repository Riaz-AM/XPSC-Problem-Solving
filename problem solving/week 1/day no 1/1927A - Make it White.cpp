#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int first = -1, last = -1;
 
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
 
        int len = last - first + 1;
        cout << len << endl;
    }
 
    return 0;
}