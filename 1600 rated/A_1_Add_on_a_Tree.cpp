// Problem Link https://codeforces.com/contest/1188/problem/A1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    int u, v;
    for (int i = 1; i < n; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++){
        if(adj[i].size() == 2){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    solve();
}