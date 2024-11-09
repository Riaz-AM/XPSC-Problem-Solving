#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    string s;
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    cin >> s;
    
    vector<int> like, dislike;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') like.push_back(i);
        else dislike.push_back(i);
    }
    
    sort(dislike.begin(), dislike.end(), [&](int i, int j) {
        return p[i] < p[j];
    });
    
    sort(like.begin(), like.end(), [&](int i, int j) {
        return p[i] < p[j];
    });
    
    vector<int> rating(n);
    int current_rating = 1;
    
    for (int i = 0; i < dislike.size(); i++) {
        rating[dislike[i]] = current_rating++;
    }
    
    for (int i = 0; i < like.size(); i++) {
        rating[like[i]] = current_rating++;
    }
    
    for (int i = 0; i < n; i++) {
        cout << rating[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}