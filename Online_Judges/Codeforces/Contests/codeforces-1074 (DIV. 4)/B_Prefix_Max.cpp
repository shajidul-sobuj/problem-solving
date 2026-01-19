// Contest: Codeforces Round 1074
// Link: https://codeforces.com/contest/1074/problem/B
// Author: Shajidul Islam Sobuj
// Codeforces: https://codeforces.com/profile/shajidul-sobuj
// GitHub: https://github.com/shajidul-sobuj

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        long long int mx = INT_MIN;
        for (int i=0;i<n;i++)
        {
            cin >> v[i];
            if (v[i]>mx) {
                mx = v[i];
            }
        }
        long long int ans = mx*n;
        cout << ans << endl;
 
    }
    return 0;
}
