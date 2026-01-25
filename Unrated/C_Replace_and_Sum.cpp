// Problem Link https://codeforces.com/contest/2193/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (auto &i : a)    cin >> i;
    for (auto &i : b)    cin >> i;
    vector<int> suffMax(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suffMax[i] = max({a[i], b[i], suffMax[i + 1]});
    }
    vector<int> prefSum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefSum[i + 1] = prefSum[i] + suffMax[i];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = prefSum[r + 1] - prefSum[l];
        cout << sum << " ";
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