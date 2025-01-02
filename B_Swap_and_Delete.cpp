#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        string s;
        cin >> s;
        
        int zero = 0, one = 0;
        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }
        
        int n = s.size();
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (one > 0) {
                    one--;
                } else {
                    cout << (n - i) << endl;
                    found = true;
                    break;
                }
            } else { // s[i] == '1'
                if (zero > 0) {
                    zero--;
                } else {
                    cout << (n - i) << endl;
                    found = true;
                    break;
                }
            }
        }
        
        if (!found) {
            cout << 0 << endl;
        }
    }
    return 0;
}