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
        string s;
        cin >> s;

        int minRepaints = k;
        int currentRepaints = 0;

        // Count white cells in the first window of size k
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') {
                currentRepaints++;
            }
        }

        minRepaints = currentRepaints;

        // Slide the window across the string
        for (int i = k; i < n; ++i) {
            if (s[i] == 'W') currentRepaints++;
            if (s[i - k] == 'W') currentRepaints--;

            minRepaints = min(minRepaints, currentRepaints);
        }

        cout << minRepaints << '\n';
    }

    return 0;
}