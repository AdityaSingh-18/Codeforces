// Problem Link https://codeforces.com/contest/1547/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, x;
    cin >> n >> k;
    vector<int> a(k), c(n + 1, 1e18);
    for(auto &i : a)    cin >> i;
    for(int i = 0; i < k; i++){
        cin >> x;
        c[a[i]] = x;
    }
    for(int i = 1; i <= n; i++){
        c[i] = min(c[i], c[i - 1] + 1);
    }
    for(int i = n - 1; i >= 1; i--){
        c[i] = min(c[i], c[i + 1] + 1);
    }
    for(int i = 1; i <= n; i++){
        cout << c[i] << " \n"[i == n];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}