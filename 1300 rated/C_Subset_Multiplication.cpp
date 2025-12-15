// Problem Link https://codeforces.com/contest/2124/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int gcd = 0, lcm = 1;
    for (int i = n - 1; i >= 0; i--){
        gcd = __gcd(gcd, a[i]);
        int x = a[i] / gcd;
        lcm = (lcm * x) / __gcd(x, lcm);
    }
    cout << lcm << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}