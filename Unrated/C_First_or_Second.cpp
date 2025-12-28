// Problem Link https://codeforces.com/contest/2178/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0, ans = -1e18;
    for (auto &i : a){
        cin >> i;
        sum += -i;
    }
    for (int i = 0; i < n; i++){
        sum += a[i];
        ans = max (ans, sum);
        if(i == 0)     sum += a[i];
        else    sum += abs(a[i]);
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