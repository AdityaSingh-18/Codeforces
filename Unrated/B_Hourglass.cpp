// Problem Link https://codeforces.com/contest/2184/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int s, k, m;
    cin >> s >> k >> m;
    if((m / k) % 2)     s = min(s, k);
    cout << max(0LL, s - m % k) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}