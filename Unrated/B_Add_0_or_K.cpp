// Problem Link https://codeforces.com/contest/2134/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n; i++){
        a[i] += (a[i] % (k + 1)) * k;
        cout << a[i] << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}