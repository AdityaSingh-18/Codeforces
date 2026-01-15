// Problem Link https://codeforces.com/contest/2175/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n + 1);
    for (int i = 0; i <= n; ++i) {
        a[i] = i;
    }
    a[r] = a[l - 1];
    for (int i = 1; i <= n; i++){
        cout << (a[i] ^ a[i - 1]) << " \n"[i == n];
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
