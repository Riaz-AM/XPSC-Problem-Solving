#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int numQueries;
    cin >> numQueries;
 
    queue<int> q;
    priority_queue<pair<int, int>> pqind;
    int index = 1;
    map<int, int> Mymap;
 
    while (numQueries--) {
        int type;
        cin >> type;
 
        if (type == 1) {
            int m;
            cin >> m;
            q.push(index);
            pqind.push({m, -index});
            Mymap[index] = m;
            index++;
        } 
        else if (type == 2) {
            while (!q.empty() && Mymap.find(q.front()) == Mymap.end()) {
                q.pop();
            }
            if (!q.empty()) {
                int c = q.front();
                q.pop();
                Mymap.erase(c);
                cout << c << " ";
            }
        } 
        else if (type == 3) {
            while (!pqind.empty() && Mymap.find(-pqind.top().second) == Mymap.end()) {
                pqind.pop();
            }
            if (!pqind.empty()) {
                int c = -pqind.top().second;
                pqind.pop();
                Mymap.erase(c);
                cout << c << " ";
            }
        }
    }
 
    return 0;
}