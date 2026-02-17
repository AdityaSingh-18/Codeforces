// Problem Link https://codeforces.com/contest/2136/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    vector<int> a(n), dp(n + 1);
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        dp[i + 1] = dp[i];
        adj[a[i]].push_back(i);
        if(adj[a[i]].size() >= a[i]){
            dp[i + 1] = max(dp[i + 1], dp[adj[a[i]][adj[a[i]].size() - a[i]]] + a[i]);
        }
    }
    cout << dp[n] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}