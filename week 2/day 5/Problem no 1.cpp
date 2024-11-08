#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> v(n);
    unordered_set<int> seen;
    int count = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(a[i]) == seen.end()) {
            count++;
            seen.insert(a[i]);
        }
        v[i] = count;
    }
    
    for (int i = 0; i < m; i++) {
        int li;
        cin >> li;
        cout << v[li - 1] << "\n";
    }
    
    return 0;
}