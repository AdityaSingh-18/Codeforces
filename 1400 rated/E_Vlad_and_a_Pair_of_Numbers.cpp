// Problem Link https://codeforces.com/contest/1790/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    if(((n + n / 2) ^ (n - n / 2)) == n){
        cout << n + n / 2 << " " << n - n / 2 << "\n";
    }
    else     cout << "-1\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}