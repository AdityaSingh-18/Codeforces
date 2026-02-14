// Problem Link https://codeforces.com/contest/2197/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a)     cin >> i;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= n)    continue;
        for(int j = 1; j <= min(a[i], n / a[i]); j++){
            int x = a[i] * j, k;
            if(a[i] != j){
                k = i - x;
                if(k >= 0 && a[k] == j)     ans++;
                k = i + x;
                if(k < n && a[k] == j)      ans++;
            }
            else{
                k = i - x;
                if(k >= 0 && a[k] == j)     ans++;
            }
        }
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