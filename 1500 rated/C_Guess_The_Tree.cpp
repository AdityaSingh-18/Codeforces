// Problem Link https://codeforces.com/contest/2001/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> adj;
    for (int i = 2; i <= n; i++){
        for (int j = 1; ; ){
            cout << "? " << j << " " << i << "\n";
            int x;
            cin >> x;
            if(x == i || x == j){
                adj.push_back({i, j});
                break;
            }
            j = x;
        }
    }
    int m = adj.size();
    cout << "! ";
    for (int i = 0; i < m; i++){
        cout << adj[i].first<< " " << adj[i].second << " \n"[i == m - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}