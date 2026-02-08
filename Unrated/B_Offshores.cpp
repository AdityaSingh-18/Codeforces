// Problem Link https://codeforces.com/contest/2194/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    int sum = 0, maxRem = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] / x;
        int rem = a[i] - y * (a[i] / x);
        maxRem = max(maxRem, rem);
    }
    cout << y * sum + maxRem << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}