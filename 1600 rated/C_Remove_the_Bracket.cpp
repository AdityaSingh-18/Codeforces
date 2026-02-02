// Problem Link https://codeforces.com/contest/1787/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), x(n), y(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0 || i == n - 1){
            x[i] = a[i];
            y[i] = a[i];
        }
        else if(k >= a[i]){
            x[i] = 0;
            y[i] = a[i];
        }
        else{
            x[i] = k;
            y[i] = a[i] - k;
        }
    }
    vector<vector<int>> minSum(n, vector<int>(2));
    for (int i = 1; i < n; i++){
        minSum[i][0] = min(minSum[i - 1][0] + y[i - 1] * x[i], minSum[i - 1][1] + x[i - 1] * x[i]);
        minSum[i][1] = min(minSum[i - 1][0] + y[i - 1] * y[i], minSum[i - 1][1] + x[i - 1] * y[i]);
    }
    cout << minSum[n - 1][0] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}