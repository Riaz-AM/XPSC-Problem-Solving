#include <bits/stdc++.h>
using namespace std;
 
string processString(const string& s) {
    stack<pair<char, int>> lowerStack;
    stack<pair<char, int>> upperStack;
    vector<pair<char, int>> result;
    
    int pos = 0;
    for (char ch : s) {
        if (ch == 'b') {
            if (!lowerStack.empty()) {
                lowerStack.pop();
            }
        } 
        else if (ch == 'B') {
            if (!upperStack.empty()) {
                upperStack.pop();
            }
        }
        else {
            if (islower(ch)) {
                lowerStack.push({ch, pos});
            } else {
                upperStack.push({ch, pos});
            }
            pos++;
        }
    }
    
    while (!lowerStack.empty()) {
        result.push_back(lowerStack.top());
        lowerStack.pop();
    }
    while (!upperStack.empty()) {
        result.push_back(upperStack.top());
        upperStack.pop();
    }
    
    sort(result.begin(), result.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second < b.second;
    });
    
    string finalResult;
    for (const auto& p : result) {
        finalResult += p.first;
    }
    
    return finalResult;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    cin.ignore();
    
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        cout << processString(s) << '\n';
    }
    
    return 0;
}