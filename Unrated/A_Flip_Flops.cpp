// Problem Link https://codeforces.com/contest/2209/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        if(a[i] > c){
            cout << c << "\n";
            return;
        }
        int d = c;
        c += min(c, k + a[i]);
        k -= min(d - a[i], k);
    }
    cout << c << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}