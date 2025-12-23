// Problem Link https://codeforces.com/contest/1669/problem/H

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(31);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n; i++){
        for (int j = 30; j >= 0; j--){
            if(a[i] & (1 << j)){
                b[j]++;
            }
        }
    }
    int maxAND = 0;
    for (int i = 30; i >= 0; i--){
        if(k >= n - b[i]){
            k -= n - b[i];
            maxAND += (1 << i);
        }
    }
    cout << maxAND << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}