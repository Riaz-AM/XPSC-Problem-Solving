#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    list<string> MyList;
    map<string, list<string>::iterator> Myset;
 
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
 
        if (Myset.find(s) == Myset.end()) {
            MyList.push_front(s);
            Myset[s] = MyList.begin();
        } else {
            MyList.erase(Myset[s]);
            MyList.push_front(s);
            Myset[s] = MyList.begin();
        }
    }
 
    for (const string& chat : MyList) {
        cout << chat << "\n";
    }
 
    return 0;
}