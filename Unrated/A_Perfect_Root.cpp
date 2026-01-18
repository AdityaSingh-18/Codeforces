// Problem Link https://codeforces.com/contest/2185/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << i << " \n"[i == n];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}