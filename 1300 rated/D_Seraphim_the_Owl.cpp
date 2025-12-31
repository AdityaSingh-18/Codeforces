// Problem Link https://codeforces.com/contest/1945/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    a[n] = b[n] = 0;
    int minCost = 1e18, cost = 0;
    for (int i = n - 1; i >= 0; i--){
        cost += min(a[i + 1], b[i + 1]);
        if(i < k)  minCost = min(minCost, cost + a[i]);
    }
    cout << minCost << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}