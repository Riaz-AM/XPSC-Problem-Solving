#include <iostream>
#include <map>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<string> p1(n), p2(n), p3(n);
        map<string, int> count;
 
        for (int i = 0; i < n; i++) {
            cin >> p1[i];
            count[p1[i]]++;
        }
 
        for (int i = 0; i < n; i++) {
            cin >> p2[i];
            count[p2[i]]++;
        }
 
        for (int i = 0; i < n; i++) {
            cin >> p3[i];
            count[p3[i]]++;
        }
 
        int s1 = 0, s2 = 0, s3 = 0;
 
        for (string word : p1) {
            if (count[word] == 1) {
                s1 += 3;
            } else if (count[word] == 2) {
                s1 += 1;
            }
        }
 
        for (string word : p2) {
            if (count[word] == 1) {
                s2 += 3;
            } else if (count[word] == 2) {
                s2 += 1;
            }
        }
 
        for (string word : p3) {
            if (count[word] == 1) {
                s3 += 3;
            } else if (count[word] == 2) {
                s3 += 1;
            }
        }
 
        cout << s1 << " " << s2 << " " << s3 << endl;
    }
 
    return 0;
}