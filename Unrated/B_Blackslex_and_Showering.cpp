// Problem Link https://codeforces.com/contest/2179/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += abs(a[i] - a[i + 1]);
    }
    int maxRemoved = 0;
    maxRemoved = max({maxRemoved, abs(a[0] - a[1]), abs(a[n - 2] - a[n - 1])});
    for (int i = 1; i < n - 1; i++) {
        int decrease = abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]) - abs(a[i + 1] - a[i - 1]);
        maxRemoved = max(maxRemoved, decrease);
    }
    cout << sum - maxRemoved << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}