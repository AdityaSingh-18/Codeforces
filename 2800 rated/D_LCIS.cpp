// Problem Link https://codeforces.com/contest/10/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m + 1);
    for (int i = 1; i <= m; i++){
        cin >> b[i];
    }
    vector<int> dp(m + 1), c(m + 1); 
    for(int i = 1; i <= n; i++){
        int k = 0;
        for(int j = 1; j <= m; j++){
            if(a[i] == b[j]){
                dp[j] = dp[k] + 1;
                c[j] = k;
            }
            else if(a[i] > b[j] && dp[k] < dp[j])    k = j;
        }
    }
    int commonSize = 0, index = 0;
    for(int i = 1; i <= m; i++){
        if(dp[i] > commonSize){
            commonSize = dp[i];
            index = i;
        }
    }
    vector<int> ans;
    while(index > 0){
        ans.push_back(b[index]);
        index = c[index];
    }
    cout << commonSize << "\n";
    for (int i = commonSize - 1; i >= 0; i--){
        cout << ans[i] << " \n"[i == 0];
    }
}

signed main(){
    solve();
}