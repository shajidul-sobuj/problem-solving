// Problem: A - Array Coloring
// Contest: Codeforces Round 2191
// Link: https://codeforces.com/contest/2191/problem/A
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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool no = false;
        for (int i = 0; i < n - 1; ++i) {
            if ((arr[i] % 2) == (arr[i+1] % 2)) {
                cout << "NO" << "\n";
                no = true;
                break;
            }
        }
        if (!no)
            cout << "YES" << "\n";
    }
    return 0;

}
