// Problem Link https://codeforces.com/contest/2195/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    vector<vector<int>> dp(n, vector<int>(7, 1e18));
    for (int j = 1; j <= 6; j++) {
        if(a[0] == j)   dp[0][j] = 0;
        else    dp[0][j] = 1;
    }    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= 6; j++) {
            int cost = 1;
            if(a[i] == j)     cost = 0;
            for (int k = 1; k <= 6; k++) {
                if(j == k || (j + k) == 7)      continue;
                if (dp[i - 1][k] != 1e18) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + cost);
                }
            }
        }
    }    
    int ans = 1e18;
    for (int j = 1; j <= 6; j++) {
        ans = min(ans, dp[n - 1][j]);
    }
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}