#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    int i = 0, j = 0;
    long long result = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            ++i;
        } else if (a[i] > b[j]) {
            ++j;
        } else {
            int countA = 0, countB = 0;
            int current = a[i];

            while (i < n && a[i] == current) {
                ++countA;
                ++i;
            }
            while (j < m && b[j] == current) {
                ++countB;
                ++j;
            }

            result += 1LL * countA * countB;
        }
    }

    cout << result << endl;

    return 0;
}