#include <iostream>
#include <string>
 
using namespace std;
 
int fun(const string& pass) {
    int time = 2;
    char prev = pass[0];
    
    for (size_t i = 1; i < pass.length(); i++) {
        if (pass[i] == prev) {
            time += 1;
        } else {
            time += 2;
        }
        prev = pass[i];
    }
    
    return time;
}
 
string str(const string& pass) {
    string s = pass;
    int maxTime = fun(pass);
    
    for (char c = 'a'; c <= 'z'; c++) {
        for (size_t i = 0; i <= pass.length(); i++) {
            string newPass = pass.substr(0, i) + c + pass.substr(i);
            int time = fun(newPass);
            if (time > maxTime) {
                maxTime = time;
                s = newPass;
            }
        }
    }
    
    return s;
}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string pass;
        cin >> pass;
        cout << str(pass) << endl;
    }
    
    return 0;
}