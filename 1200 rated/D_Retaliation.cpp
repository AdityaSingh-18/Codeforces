// Problem Link https://codeforces.com/contest/2117/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)   cin >> i;
    ll y = (2 * a[0] - a[1]) / (n + 1);
    ll x = a[1] - a[0] + y;
    if(x < 0 || y < 0){
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n; i++){
        a[i] -= x * (i + 1);
        a[i] -= y * (n - i);
    }
    for (int i = 0; i < n; i++){
        if(a[i] != 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}