#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<string> adj(n);
    for (int i = 0; i < n; i++){
        cin >> adj[i];
    }
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        a[i]--;
    }
    vector<vector<int>> dist(n, vector<int>(n, 1e18));
    for (int i = 0; i < n; i++) {
        queue<int> q;
        q.push(i);
        dist[i][i] = 0;
        while (!q.empty()) {
            int u = q.front(); 
            q.pop();
            for (int v = 0; v < n; v++) {
                if (adj[u][v] == '1' && dist[i][v] > dist[i][u] + 1) {
                    dist[i][v] = dist[i][u] + 1;
                    q.push(v);
                }
            }
        }
    }
    vector<int> ans;
    ans.push_back(a[0]);
    int last = 0;
    for (int i = 1; i < m - 1; i++) {
        int len = i - last + 1;
        if (dist[a[last]][a[i + 1]] < len) {
            ans.push_back(a[i]);
            last = i;
        }
    }
    ans.push_back(a[m - 1]);
    int p = ans.size();
    cout << p << "\n";
    for (int i = 0; i < p; i++){
        cout << ans[i] + 1 << " \n"[i == p - 1];
    }
}

signed main() {
    solve();
}