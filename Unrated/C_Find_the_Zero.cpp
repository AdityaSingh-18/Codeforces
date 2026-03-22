// Problem Link https://codeforces.com/contest/2209/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    for (int i = 2 ; i < (2 * n - 1); i += 2){
        cout << "? " << i << " " << i + 1 << "\n";
        cin >> x;
        if(x == 1){
            cout << "! " << i << "\n";
            return;
        }
    }
    cout << "? 1 2" << "\n";
    cin >> x;
    if(x == 1){
        cout << "! 1" << "\n";
        return;
    }
    cout << "? 1 3" << "\n";
    cin >> x;
    if(x == 1){
        cout << "! 1" << "\n";
        return;
    }
    cout << "! " << 2 * n << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}