// Problem Link https://codeforces.com/contest/1466/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1), c(n - 2);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int u, v, j = 0;
    for (int i = 1; i < n; i++){
        cin >> v >> u;
        if(b[v])    c[j++] = a[v];
        if(b[u])    c[j++] = a[u];
        b[v] = b[u] = 1;
    }
    sort(c.rbegin(), c.rend());
    cout << sum << " ";
    for (auto &i : c){
        sum += i;
        cout << sum << " ";
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