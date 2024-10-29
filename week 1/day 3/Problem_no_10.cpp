#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    set<string> seen;
    vector<string> results;
 
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
 
        if (seen.count(name)) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
            seen.insert(name);
        }
    }
 
    for (string result : results) {
        cout << result << endl;
    }
 
    return 0;
}