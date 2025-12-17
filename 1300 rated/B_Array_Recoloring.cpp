// Problem Link https://codeforces.com/problemset/problem/2075/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int sum = 0;
    if(k > 1){
        sort(a.rbegin(), a.rend());
        for (int i = 0; i <= k; i++){
            sum += a[i];
        }
    }
    else{
        int maxRight = 0, maxLeft = 0;
        for (int i = 0; i < n; i++){
            if(i > 0){
                maxRight = max(maxRight, a[i]);
            }
            if(i < (n - 1)){
                maxLeft = max(maxLeft, a[i]);
            }
        }
        sum = max(a[0] + maxRight, maxLeft + a[n - 1]);
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