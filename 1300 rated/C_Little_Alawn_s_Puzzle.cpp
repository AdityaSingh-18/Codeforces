// Problem Link https://codeforces.com/contest/1534/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void dfs(vector<int> &adj, vector<int> &visited, int v){
    if(visited[v])    return;
    visited[v] = 1;
    dfs(adj, visited, adj[v]);
}

void solve(){
    int n, x;
    cin >> n;
    vector<int> adj(n + 1), a(n + 1), visited(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> x;
        adj[a[i]] = x;
    }
    int ans = 1;
    for (int i = 0; i < n; i++){
        if(!visited[a[i]]){
            dfs(adj, visited, a[i]);
            ans *= 2;
            ans %= MOD;
        }
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