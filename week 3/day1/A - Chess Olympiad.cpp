#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y, Z;
    cin >> X >> Y >> Z;

    double ourScore = X + Y * 0.5;
    double opponentScore = Z + Y * 0.5;
    int remainingGames = 4 - (X + Y + Z);
    double maxScore = ourScore + remainingGames;

    if (maxScore > opponentScore) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}