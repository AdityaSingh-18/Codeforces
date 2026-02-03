// Problem Link https://codeforces.com/contest/2072/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n >> x;
    int y = x, count = 0;
    while(y & 1){
        y >>= 1;
        count++;
    }
    int mex = pow(2, count);
    if (mex <= x || (mex >> 1) >= n) {
        cout << x << " ";
        n--;
    }
    for (int i = 0; i < min({mex, n, x}); i++){
        cout << i << " ";
    }
    int j = 0;
    while((n - min(mex, x) - j) > 0){
        cout << mex - 1 << " ";
        j++;
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