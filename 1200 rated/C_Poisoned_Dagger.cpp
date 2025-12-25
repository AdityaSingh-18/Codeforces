// Problem Link https://codeforces.com/contest/1613/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int l = 0, r = 1e18;
    while (l <= r) {
        int m = (l + r) / 2;
        int sum = m;
        for (int i = 0; i < n - 1; i++){ 
            sum += min(m, a[i + 1] - a[i]);
        }
        if (sum < k)      l = m + 1;
        else     r = m - 1;
    }
    cout << l << '\n';
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}