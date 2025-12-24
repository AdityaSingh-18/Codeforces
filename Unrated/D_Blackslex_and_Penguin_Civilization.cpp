// Problem Link https://codeforces.com/contest/2179/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int m = 1 << n;
    vector<int> a;
    vector<int> used(m);
    for (int i = n; i >= 0; i--) {
        int mask = (1LL << i) - 1;
        for (int j = 0; j < m; j++) {
            if (!used[j] && ((j & mask) == mask)){
                used[j] = 1;
                a.push_back(j);
            }
        }
    }
    for (int i = 0; i < m; i++) {
        cout << a[i] << " \n"[i == m - 1];
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
