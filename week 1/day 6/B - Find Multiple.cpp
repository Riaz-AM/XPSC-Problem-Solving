#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    int sum = ((A + C - 1) / C) * C;

    if (sum <= B) {
        cout << sum << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}