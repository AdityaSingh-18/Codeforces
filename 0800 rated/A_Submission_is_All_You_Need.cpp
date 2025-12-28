// Problem Link https://codeforces.com/contest/2130/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if(x == 0)     sum++;
        sum += x;
    }
    cout << sum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}