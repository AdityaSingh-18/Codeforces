// Problem Link https://codeforces.com/contest/2194/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    cout << n - n / m << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}