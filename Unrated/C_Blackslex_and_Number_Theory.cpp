// Problem Link https://codeforces.com/contest/2179/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int min1 = 1e18, min2 = 1e18;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } 
        else if (a[i] > min1 && a[i] < min2) {
            min2 = a[i];
        }
    }
    int k = max (min1, min2 - min1);
    cout << k << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}