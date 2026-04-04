// Problem Link https://codeforces.com/contest/2218/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int i = 1, j = 3 * n;
    for (int i = 1; i <= n; i++, j -= 2){
        cout << i << " " << j << " " << j - 1 << " ";
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}