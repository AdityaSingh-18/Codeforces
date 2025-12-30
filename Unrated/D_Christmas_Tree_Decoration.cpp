// Problem Link https://codeforces.com/contest/2182/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int x = sum / n;
    int r = sum % n;
    int count = 0, flag = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > x + 1)    flag = 1;
        else if(a[i] == x + 1)    count++;
    }
    if(flag || count > r){
        cout << "0\n";
        return;
    }
    int ans = 1;
    for(int i = r - count + 1; i <= r; i++){
        ans = (ans * i) % MOD;
    }
    for(int i = 1; i <= n - count; i++){
        ans = (ans * i) % MOD;
    }
    cout << ans << "\n";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}