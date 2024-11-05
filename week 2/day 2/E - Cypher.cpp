#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            int moves_count;
            string moves;
            
            cin >> moves_count >> moves;
            
            for (char move : moves) {
                if (move == 'U') {
                    a[i] = (a[i] - 1 + 10) % 10;
                } else if (move == 'D') {
                    a[i] = (a[i] + 1) % 10;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}