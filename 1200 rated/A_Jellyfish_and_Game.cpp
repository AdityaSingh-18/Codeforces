// Problem Link https://codeforces.com/contest/1874/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int sum = accumulate(a.begin(), a.end(), 0LL);
    if(a[n - 1] < b[0]){
        sum += b[0] - a[n - 1];
    }
    if(k % 2 == 0){
        if(a[n - 1] < b[0]){
            sum += min(a[n - 1], b[m - 1]) - max(a[0], b[0]);
        }
        else    sum += b[m - 1] - a[0];
    }
    cout << sum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}