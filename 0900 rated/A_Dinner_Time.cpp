// Problem Link https://codeforces.com/contest/2102/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if(n % p)   cout << "YES\n";
    else if ((n * q) / p == m)  cout << "YES\n";
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}