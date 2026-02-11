// Problem Link https://codeforces.com/contest/2197/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int p, q;
    cin >> p >> q;
    if (3 * p < 2 * q || p >= q)    cout << "Alice\n";
    else    cout << "Bob\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}