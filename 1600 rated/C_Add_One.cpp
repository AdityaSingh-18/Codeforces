// Problem Link https://codeforces.com/contest/1513/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> dp(2e5 + 5, 2);
const int MOD = 1e9 + 7;

void solve(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    while(n > 0){
        int d = n % 10;
        count += ((m + d) < 10 ? 1 : dp[m + d - 10]);
        count %= MOD;
        n /= 10;
    }
    cout << count << "\n";
}

signed main(){
    dp[9] = 3;
    for (int i = 10; i < 2e5 + 5; i++){
        dp[i] = (dp[i - 10] + dp[i - 9]) % MOD;
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}