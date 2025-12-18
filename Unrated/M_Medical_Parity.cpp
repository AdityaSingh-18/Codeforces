// Problem Link https://codeforces.com/contest/2181/problem/M

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string a, b;
    cin >> a >> b;
    int n = a.size();
    vector<vector<int>> dp(n, vector<int> (2, 1e18));
    dp[0][0] = dp[0][1] = 0;
    if(a[0] == '1')     dp[0][0]++;
    else     dp[0][1]++;
    if(b[0] == '1')     dp[0][0]++;
    else      dp[0][1]++;
    for(int i = 1; i < n; i++){
        dp[i][0] = (b[i] == '1') + min(dp[i - 1][0] + (a[i] == '1'), dp[i - 1][1] + (a[i] == '0'));
        dp[i][1] = (b[i] == '0') + min(dp[i - 1][0] + (a[i] == '0'), dp[i - 1][1] + (a[i] == '1'));
    }
    int ans = min(dp[n - 1][0], dp[n - 1][1]);
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}