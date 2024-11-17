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
        vector<long long> a(n);

        long long sum = 0;
        int operations = 0;
        bool neg_seg = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += abs(a[i]);

            if (a[i] < 0) {
                if (!neg_seg) {
                    operations++;
                    neg_seg = true;
                }
            } else if (a[i] > 0) {
                neg_seg = false;
            }
        }

        cout << sum << " " << operations << "\n";
    }
    return 0;
}