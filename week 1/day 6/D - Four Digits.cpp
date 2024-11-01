#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    char result[5];
    int index = 3;

    for (int i = 0; i < 4; i++) {
        result[i] = '0';
    }
    result[4] = '\0';

    while (N > 0 && index >= 0) {
        result[index] = (N % 10) + '0';
        N /= 10;
        index--;
    }

    cout << result << endl;

    return 0;
}