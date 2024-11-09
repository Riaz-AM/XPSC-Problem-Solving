#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    priority_queue<int> pq;
    long long total = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 0) {
            if (!pq.empty()) {
                total += pq.top();
                pq.pop();
            }
        } else {
            pq.push(s[i]);
        }
    }

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}