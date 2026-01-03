// Problem Link https://codeforces.com/contest/1974/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;   
    vector<tuple<int, int, int>> b;
    for(int i = 0; i < n - 2; i++) {
        b.push_back({a[i], a[i + 1], a[i + 2]});
    }
    map<tuple<int, int, int>, int> mp12, mp23, mp13, mp123;
    int ans = 0;
    for(auto &[x, y, z] : b) {
        mp12[{x, y, 0}]++;
        mp23[{y, z, 0}]++;
        mp13[{x, z, 0}]++;
        mp123[{x, y, z}]++;
        ans += mp12[{x, y, 0}] + mp23[{y, z, 0}] + mp13[{x, z, 0}] - 3 * mp123[{x, y, z}];
    }
    cout << ans << '\n';
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}