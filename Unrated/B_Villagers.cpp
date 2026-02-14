// Problem Link https://codeforces.com/contest/2133/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    sort(a.rbegin(), a.rend());
    int sum = 0;
    for (int i = 0; i < n; i += 2){
        sum += a[i];
    }
    cout << sum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}