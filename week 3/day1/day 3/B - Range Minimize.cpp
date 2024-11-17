#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int result = INT_MAX;
        result = min(result, a[n - 3] - a[0]);
        result = min(result, a[n - 1] - a[2]);
        result = min(result, a[n - 2] - a[1]);

        cout << result << "\n";
    }

    return 0;
}