#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, T;
    cin >> A >> B >> T;

    int total_biscuits = 0;
    double time_limit = T + 0.5;

    for (int i = 1; i * A <= time_limit; i++) {
        total_biscuits += B;
    }

    cout << total_biscuits << endl;

    return 0;
}