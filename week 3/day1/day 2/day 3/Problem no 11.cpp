#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long result = 0;
        int len = 0;

        for (int temp : a) {
            if (temp <= q) {
                len++;
            } else {
                if (len >= k) {
                    long long st = len - k + 1;
                    result += (st * (st + 1)) / 2;
                }
                len = 0;
            }
        }

        if (len >= k) {
            long long st = len - k + 1;
            result += (st * (st + 1)) / 2;
        }

        cout << result << '\n';
    }

    return 0;
}