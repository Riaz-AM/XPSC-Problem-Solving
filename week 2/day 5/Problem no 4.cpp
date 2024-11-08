#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> route(n);

        map<int, int> first, last;
        
        for (int i = 0; i < n; ++i) {
            cin >> route[i];
            if (first.find(route[i]) == first.end()) {
                first[route[i]] = i;  // Store the first occurrence of each station
            }
            last[route[i]] = i;  // Continuously update to store the last occurrence
        }

        while (k--) {
            int a, b;
            cin >> a >> b;
            
            if (first.find(a) != first.end() && last.find(b) != last.end() && first[a] <= last[b]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}