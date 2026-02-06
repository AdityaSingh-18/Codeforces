// Problem Link https://codeforces.com/contest/2157/problem/F

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, x = 63;
    cin >> n;
    n = 250047;
    vector<array<ll, 2>> ans;
    for (ll i = 1; i < n; i *= x) {
        for (ll j = 0; j < i * (x - 1); j += i) {
            for (ll k = n - i * (x - 1); k >= 1; k -= i * x) {
                ans.push_back({k + j, i});
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto &a : ans){
        cout << a[0] << " " << a[1] << "\n";
    }
}

int main(){
    solve();
}