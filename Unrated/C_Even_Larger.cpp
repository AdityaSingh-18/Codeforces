// Problem Link https://codeforces.com/contest/2134/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a)    cin >> i;
    int k = 0;
    for(int i = 1; i < n; i += 2){
        int sum = a[i - 1];
        if(i < n - 1)    sum += a[i + 1];
        if(sum > a[i]){
            int d = sum - a[i];
            k += d;
            if(i < n - 1)    a[i + 1] = max(0LL, a[i + 1] - d);
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