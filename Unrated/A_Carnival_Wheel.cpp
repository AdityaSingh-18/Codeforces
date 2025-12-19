// Problem Link https://codeforces.com/contest/2180/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int l, a, b;
    cin >> l >> a >> b;
    int GCD = gcd(l, b);
    int x = a % GCD;
    int ans = x + GCD * ((l - x - 1) / GCD);
    cout << ans << '\n';
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}