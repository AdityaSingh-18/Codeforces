// Problem Link https://codeforces.com/contest/2129/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)    cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j])    b[i]++;
            else {
                ans++;
                b[j]--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        ans += min(0LL, b[i]);
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