// Problem Link https://codeforces.com/contest/2185/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxElement = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        maxElement = max(maxElement, a[i]);
    }
    cout << maxElement * n << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}