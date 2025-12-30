// Problem Link https://codeforces.com/contest/1984/problem/C1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int minSum = 0, maxSum = 0;
    for (int i = 0; i < n; i++){
        minSum += a[i];
        maxSum += a[i];
        maxSum = max (abs(maxSum), abs(minSum));
    }
    cout << maxSum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}