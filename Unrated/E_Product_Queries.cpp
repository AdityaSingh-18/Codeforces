// Problem Link https://codeforces.com/contest/2193/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), freq(n + 1);
    for (auto &i : a) {
        cin >> i;
        freq[i]++;
    }
    vector<int> dp(n + 1, 1e18);
    for (int i = 1; i <= n; i++) {
        if (freq[i])    dp[i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        if (freq[i] == 0)   continue;
        for (int j = i; j <= n; j += i) {
            if (dp[j / i] != 1e18) {
                dp[j] = min(dp[j], dp[j / i] + 1);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (dp[i] == 1e18)     cout << -1 << " ";
        else        cout << dp[i] << " ";
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