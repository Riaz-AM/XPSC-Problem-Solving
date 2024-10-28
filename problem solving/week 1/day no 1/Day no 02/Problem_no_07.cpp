#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    map<string, int> x; 
    vector<string> result; 
 
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
 
        if (x[name] == 0) {
            result.push_back("OK");
            x[name] = 1; 
        } else {
            string s;
            int c = x[name]; 
            do {
                stringstream ss;
                ss << name << c; 
                s = ss.str();
                c++;
            } while (x[s] > 0);
            result.push_back(s);
            x[name] = c; 
            x[s] = 1; 
        }
    }
 
    for (const string &st : result) {
        cout << st << "\n";
    }
 
    return 0;
}