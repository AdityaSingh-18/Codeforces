// Problem Link https://codeforces.com/contest/2064/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), prefix(n + 1), suffix(n + 1);
    for (auto &i : a)   cin >> i;
    for(int i = 0; i < n; i++){
        if(a[i] >= 0)    prefix[i + 1] = prefix[i] + a[i];
        else     prefix[i + 1] = prefix[i];
    }
    for(int i = n - 1; i >= 0; i--){
        if(a[i] <= 0)    suffix[i] = suffix[i + 1] + -a[i];
        else    suffix[i] = suffix[i + 1];
    }
    int ans = max({0LL, prefix[n], suffix[0]});
    for(int i = 1; i < n; i++){
        ans = max(ans, prefix[i] + suffix[i]);
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