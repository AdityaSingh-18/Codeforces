// Problem Link https://codeforces.com/contest/2203/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, d;
    cin >> n >> m >> d;
    int k = d / m + 1;
    cout << (n + k - 1) / k << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}