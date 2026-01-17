// Problem: D1
// Contest: Codeforces Round 2191
// Link: https://codeforces.com/contest/2191/problem/D1
// Author: Shajidul Islam Sobuj
// Codeforces: https://codeforces.com/profile/shajidul-sobuj
// GitHub: https://github.com/shajidul-sobuj


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int r_par = 0;
        int ans = -1;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '(') {
                r_par++;
            } else {
                if (r_par >= 2) {
                    ans = n - 2;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;

}
