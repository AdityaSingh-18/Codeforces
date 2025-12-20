// Problem Link https://codeforces.com/problemset/problem/802/M

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += a[i];
    }
    cout << sum << "\n";
}

signed main(){
    solve();
}