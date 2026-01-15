// Problem Link https://codeforces.com/contest/2114/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    multiset<ll> s1, s2;
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
        s1.insert(a[i].first);
        s2.insert(a[i].second);
    }
    if(n <= 2){
        cout << n << "\n";
        return;
    }
    ll ans = 3e18;
    for (int i = 0; i < n; i++){
        ll x = a[i].first, y = a[i].second;
        s1.erase(s1.find(x));
        s2.erase(s2.find(y));
        ll l = *--s1.end() - *s1.begin() + 1;
        ll b = *--s2.end() - *s2.begin() + 1;
        ll area = l * b;
        if(area == n - 1){
            area += min(l, b);
        }
        ans = min (ans, area);
        s1.insert(x);
        s2.insert(y);
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