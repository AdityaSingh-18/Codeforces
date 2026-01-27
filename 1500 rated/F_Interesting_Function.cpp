// Problem Link https://codeforces.com/contest/1538/problem/F

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int l, r;
    cin >> l >> r;
    int ans = 0, prev = 0;
    for (int i = 9; i >= 0; i--){
        int curr = (r / (int)pow(10, i)) - (l / (int)pow(10, i));
        ans += (curr - prev) * (i + 1);
        prev = curr;
    }
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}