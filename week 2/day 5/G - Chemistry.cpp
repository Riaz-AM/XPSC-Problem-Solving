#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> results;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int count = 0;
        for (auto& entry : freq) {
            if (entry.second % 2 != 0) {
                count++;
            }
        }

        int len = n - k;
        if (len % 2 == 0) {
            if (count == 0 || count <= k) {
                results.push_back("YES");
            } else {
                results.push_back("NO");
            }
        } else {
            if (count == 1 || count - 1 <= k) {
                results.push_back("YES");
            } else {
                results.push_back("NO");
            }
        }
    }

    for (const string& result : results) {
        cout << result << "\n";
    }

    return 0;
}