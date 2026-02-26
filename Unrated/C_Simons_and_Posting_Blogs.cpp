// Problem Link https://codeforces.com/contest/2205/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int m, x;
    vector<vector<int>> a(n);
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> x;
            a[i].push_back(x);
            s.insert(a[i][j]);
        }
    }
    vector<int> ans, visited(n);
    for(int i = 0; i < n; i++){
        int curr = -1;
        vector<int> b;
        for(int j = 0; j < n; j++){
            if(visited[j])    continue;
            vector<int> c;
            unordered_set<int> seen;
            m = a[j].size() - 1;
            for(int k = m; k >= 0; k--){
                if(!seen.count(a[j][k]) && s.count(a[j][k])){
                    seen.insert(a[j][k]);
                    c.push_back(a[j][k]);
                }
            }
            if(curr == -1 || c < b){
                curr = j;
                b = c;
            }
        }
        visited[curr] = 1;
        for(auto &j : b){
            ans.push_back(j);
            s.erase(j);
        }
    }
    int p = ans.size();
    for(int i = 0; i < p; i++){
        cout << ans[i] << " \n"[i == p - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}