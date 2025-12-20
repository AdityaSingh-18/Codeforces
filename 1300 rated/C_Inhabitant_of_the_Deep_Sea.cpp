// Problem Link https://codeforces.com/contest/1955/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0LL);
    if(sum <= k){
        cout << n << "\n";
        return;
    }
    int ans = 0, x = (k + 1) / 2;
    for (int i = 0; i < n; i++){
        if(a[i] <= x){
            ans++;
            x -= a[i];
        }
        else    break;
    }
    reverse(a.begin(), a.end());
    x = k / 2;
    for (int i = 0; i < n; i++){
        if(a[i] <= x){
            ans++;
            x -= a[i];
        }
        else    break;
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