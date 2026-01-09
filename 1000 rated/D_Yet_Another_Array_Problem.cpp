// Problem Link https://codeforces.com/contest/2167/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    ll minGCD = 1e18;
    for (int i = 0; i < a.size(); i++){
        for (ll j = 2; j <= 1e18; j++){
            if(__gcd(a[i], j) == 1){
                minGCD = min(minGCD, j);
                break;
            }
        }
    }
    cout << minGCD << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}