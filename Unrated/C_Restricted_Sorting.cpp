// Problem Link https://codeforces.com/contest/2188/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    b = a;
    sort(b.begin(), b.end());
    int maxDiff = 1e18;
    for (int i = 0; i < n; i++){
        if(a[i] == b[i])    continue;
        maxDiff = min(maxDiff, max(a[i] - b[0], b[n - 1] - a[i]));
    }
    cout << (maxDiff == 1e18 ? -1 : maxDiff) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}