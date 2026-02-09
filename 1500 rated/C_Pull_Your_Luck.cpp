// Problem Link https://codeforces.com/contest/1804/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x, p;
    cin >> n >> x >> p;
    for(int i = 1; i <= p && i <= 2 * n; i++){
        int sum = i * (i + 1) / 2;
        if((x + sum) % n == 0){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}