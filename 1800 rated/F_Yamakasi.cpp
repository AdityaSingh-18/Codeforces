// Problem Link https://codeforces.com/contest/2121/problem/F

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, s, x;
    cin >> n >> s >> x;
    vector<ll> a(n + 1, 0), pref(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    ll ans = 0;
    map<ll, ll> b;
    int j = 1;
    for (int i = 1; i <= n; i++){
        if(a[i] > x){
            b.clear();
            j = i + 1;
        }
        else if(a[i] == x){
            while(j <= i){
                b[pref[j - 1]]++;
                j++;
            }
        }
        ans += b[pref[i] - s];
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