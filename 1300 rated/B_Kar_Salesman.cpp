// Problem Link https://codeforces.com/contest/2022/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int maxElement = 0, sum = 0;
    for (auto &i : a){
        cin >> i;
        sum += i;
        maxElement = max(maxElement, i);
    }
    cout << max(maxElement, (sum + k - 1) / k) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}