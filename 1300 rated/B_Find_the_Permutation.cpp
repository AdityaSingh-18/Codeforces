// Problem Link https://codeforces.com/contest/2056/problem/B

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
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        a[i] = i;
    }
    sort(a.begin(), a.end(), [&](int i, int j){
        if (adj[i][j] == '1')   return i < j;
        return i > j;
    });
    for (auto &i : a){
        cout << i + 1 << " ";
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}