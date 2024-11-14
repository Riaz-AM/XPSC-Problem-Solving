#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (N <= 3) {
            cout << "0\n";
            continue;
        }

        sort(A.begin(), A.end());

        int result = INT_MAX;
        result = min(result, A[N - 1] - A[2]);
        result = min(result, A[N - 3] - A[0]);
        result = min(result, A[N - 2] - A[1]);

        cout << result << '\n';
    }

    return 0;
}