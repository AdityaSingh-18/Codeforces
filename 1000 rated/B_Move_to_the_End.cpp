// Problem Link https://codeforces.com/contest/2104/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    vector<int> maxPref(n + 1);
    for (int i = 0; i < n; i++){
        maxPref[i + 1] = max(maxPref[i], a[i]);
    }
    vector<int> sumSuffix(n + 1);
    for (int i = n - 1; i >= 0; i--){
        sumSuffix[i] = sumSuffix[i + 1] + a[i]; 
    }
    for (int i = n - 1; i >= 0; i--){
        int res = max (sumSuffix[i], maxPref[i] + sumSuffix[i + 1]);
        cout << res << " \n"[i == 0];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}