// Problem Link https://codeforces.com/contest/2184/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    if (n == k){
        cout << 0 << "\n";
        return;
    }
    if (k > n) {
        cout << -1 << "\n";
        return;
    }
    for (int i = 1; i <= 31; i++) {
        int power = 1LL << i;
        int l = k * power - power + 1;
        int r = k * power + power - 1;
        if (n >= l && n <= r) {
            cout << i << "\n";
            return;
        }
        if (l > n)       break;
    }
    cout << "-1\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}