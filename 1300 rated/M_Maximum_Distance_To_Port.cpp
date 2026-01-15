// Problem Link https://codeforces.com/contest/2172/problem/M

#include <bits/stdc++.h>
using namespace std;
#define int long long

void bfs(vector<vector<int>> &adj, vector<int> &b, int start) {
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (b[v] == -1) {
                b[v] = b[u] + 1;
                q.push(v);
            }
        }
    }
}

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)    cin >> a[i];
    vector<vector<int>> adj(n + 1);
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> b(n + 1, -1);
    b[1] = 0;
    bfs(adj, b, 1);
    vector<int> ans(k + 1);
    for (int i = 1; i <= n; i++) {
        ans[a[i]] = max(ans[a[i]], b[i]);
    }
    for (int i = 1; i <= k; i++) {
        cout << ans[i] << " \n"[i == k];
    }
}

signed main(){
    solve();
}