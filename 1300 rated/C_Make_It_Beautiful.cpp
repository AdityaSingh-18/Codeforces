// Problem Link https://codeforces.com/contest/2118/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    ll ans = 0;
    for(auto &i : a){
        cin >> i;
        ans += __builtin_popcountll(i);
    }
    for (int i = 0; i <= 60; i++){
        ll x = 1ll << i;
        for (int j = 0; j < n; j++){
            if(!(a[j] & x) && k >= x){
                ans++;
                k -= x;
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}