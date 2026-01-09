// Problem Link https://codeforces.com/contest/2111/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto  &i : a)  cin >> i;
    ll minCost = 1e18;
    for (int i = 0; i < n; i++){
        ll cost = a[i] * i;
        while(a[i] == a[i + 1] && i < n - 1)    i++;
        cost += a[i] * (n - i - 1);
        minCost = min(minCost, cost);
    }
    cout << minCost << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}