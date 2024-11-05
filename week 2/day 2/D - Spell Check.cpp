#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    string target = "Timur";
    sort(target.begin(), target.end());
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        if (n == 5) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            
            if (sorted_s == target) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}