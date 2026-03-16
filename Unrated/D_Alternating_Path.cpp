// Problem Link https://codeforces.com/contest/2204/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }    
    vector<int> color(n + 1, -1);
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(color[i] != -1)     continue;
        stack<int> st;
        st.push(i);
        color[i] = 0;
        int countZero = 0, countOne = 0, isBipartite = 1;
        while(!st.empty()){
            int u = st.top();
            st.pop();
            if(color[u] == 0)   countZero++;
            else    countOne++;
            for(int v : adj[u]){
                if(color[v] == -1){
                    color[v] = 1 - color[u];
                    st.push(v);
                }
                else if(color[v] == color[u])    isBipartite = 0;
            }
        }
        if(isBipartite){
            ans += max(countZero, countOne);
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