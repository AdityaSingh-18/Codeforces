// Problem Link https://codeforces.com/contest/1136/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    cout <<  3 * n + min (k - 1, n - k) << "\n";
}

signed main(){
    solve();
}