// Problem Link https://codeforces.com/contest/1320/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a[x - i] += x;
    }
    int maxSum = 0;
    for (auto &[key, count] : a) {
        maxSum = max(maxSum, count);
    }
    cout << maxSum << "\n";
}

signed main(){
    solve();
}