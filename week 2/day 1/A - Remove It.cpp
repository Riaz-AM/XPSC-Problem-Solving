#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;

    vector<int> result;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num != X) {
            result.push_back(num);
        }
    }

    for (size_t i = 0; i < result.size(); i++) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}