// Problem Link https://codeforces.com/contest/1593/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (auto &i : a)   cin >> i;
    sort(a.rbegin(), a.rend());
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += (n - a[i]);
        if(sum >= n){
            cout << i << "\n";
            return;
        }
    }
    cout << k << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}