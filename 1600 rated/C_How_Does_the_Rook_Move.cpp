// Problem Link https://codeforces.com/contest/1957/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    int row, col, count = 0;
    for (int i = 0; i < k; i++){
        cin >> row >> col;
        count++;
        if(row != col)  count++;
    }
    int m = n - count;
    vector<int> dp(m + 2);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 1; i < m; i++){
        dp[i + 1] = (dp[i] + dp[i - 1] * i * 2LL % MOD) % MOD;
    }
    cout << dp[m] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}