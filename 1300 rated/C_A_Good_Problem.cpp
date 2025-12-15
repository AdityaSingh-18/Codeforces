#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    if(n % 2){
        cout << l << "\n";
        return;
    }
    if(n == 2){
        cout << "-1\n";
        return;
    }
    int res = 1;
    while(res <= r){
        if(res > l){
            if(k <= n - 2){
                cout << l << "\n";
                return;
            }
            else{
                cout << res << "\n";
                return;
            }
        }
        res *= 2;
    }
    cout << "-1\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}