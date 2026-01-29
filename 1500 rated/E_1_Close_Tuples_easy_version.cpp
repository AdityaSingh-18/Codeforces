// Problem Link https://codeforces.com/contest/1462/problem/E1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    int total = 0;
    for (int i = 0; i < n; i++){
        int j = upper_bound(a.begin(), a.end(), a[i] + 2) - a.begin() - 1;
        total += ((j - i) * (j - i - 1)) / 2;
    }
    cout << total << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}