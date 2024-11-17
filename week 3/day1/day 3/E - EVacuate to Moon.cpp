#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, M, H;
        cin >> N >> M >> H;

        vector<int> A(N), B(M);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> B[i];
        }

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());

        long long totalEnergy = 0;
        int minCount = min(N, M);

        for (int i = 0; i < minCount; i++) {
            long long energyFromOutlet = (long long)B[i] * H;
            totalEnergy += min((long long)A[i], energyFromOutlet);
        }

        cout << totalEnergy << "\n";
    }

    return 0;
}