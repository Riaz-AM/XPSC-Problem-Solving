#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<int> boxSizes(n);
    map<int, int> freq;
 
    for (int i = 0; i < n; ++i) {
        cin >> boxSizes[i];
        freq[boxSizes[i]]++;
    }
 
    int a = 0;
    for (const auto& pair : freq) {
        a = max(a, pair.second);
    }
 
    cout << a << "\n";
 
    return 0;
}