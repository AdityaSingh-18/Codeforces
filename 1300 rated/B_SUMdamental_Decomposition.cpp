// Problem Link https://codeforces.com/contest/2108/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n >> x;
    int bits = __builtin_popcountll(x);
    if (n <= bits){
        cout << x << "\n";
        return;
    }
    if ((n - bits) % 2 == 0){
        cout << x + n - bits << "\n";
    }
    else{
        if (x > 1){
            cout << x + n - bits + 1 << "\n";
            return;
        }
        if (x == 1){
            cout << n + 3 << "\n";
            return;
        }
        else{
            if (n == 1)    cout << -1 << "\n";
            else    cout << n + 3 << "\n";
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}