// Problem Link https://codeforces.com/contest/2140/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int curr = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(i % 2)   curr -= a[i];
        else    curr += a[i];
    }
    int ans = curr + n - 1 - (n - 1) % 2;
    int minEven = 1e18, minOdd = 1e18;
    for(int i = 0; i < n; i++){
        if(i % 2){
            ans = max(ans, curr + i - minEven + 2 * a[i]);
            minOdd = min(minOdd, i - 2 * a[i]);
        }
        else{
            ans = max(ans, curr + i - minOdd - 2 * a[i]);
            minEven = min(minEven, i + 2 * a[i]);
        }
    }
    cout << ans << '\n';
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}