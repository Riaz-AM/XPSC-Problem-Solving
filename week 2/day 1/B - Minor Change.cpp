#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, T;
    cin >> S >> T;

    int count = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != T[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}