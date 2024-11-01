#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;
    int coins = max(A, B) + (max(A, B) - 1);
    coins = max(coins, A + B);

    cout << coins << endl;

    return 0;
}
