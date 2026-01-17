// Problem Link https://codeforces.com/contest/2157/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n), pref(n + 1);
    ll ans = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < l){
            ans += l - a[i];
            a[i] = l;
        }
        if(a[i] > r){
            ans += a[i] - r;
            a[i] = r;
        }
    }    
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        pref[i + 1] = pref[i] + a[i];
    }
    ans += pref[n] - pref[n / 2] - pref[(n + 1) / 2];
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}