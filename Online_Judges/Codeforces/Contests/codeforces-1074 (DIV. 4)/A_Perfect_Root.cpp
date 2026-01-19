// Contest: Codeforces Round 1074
// Link: https://codeforces.com/contest/1074/problem/A
// Author: Shajidul Islam Sobuj
// Codeforces: https://codeforces.com/profile/shajidul-sobuj
// GitHub: https://github.com/shajidul-sobuj

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            for (int i = 1; i < n; i++) {
                cout << i << " ";
            }
            cout << n << endl;
        }
    }
    return 0;
}
