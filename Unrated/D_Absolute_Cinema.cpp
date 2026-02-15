// Problem Link https://codeforces.com/contest/2195/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    int sum = 0;
    for (int i = 1; i < n - 1; i++) {
        b[i] = (a[i + 1] + a[i - 1] - 2 * a[i]) / 2;
        sum += b[i];
    }    
    int total = (2 * (a[0] + a[n - 1]) - a[1] - a[n - 2] - 2 * sum) / (n - 1);
    for (int i = 0; i < n; i++) {
        if(i == 0)    b[i] = (total + a[1] - a[0]) / 2;
        if(i == n - 1)    b[n - 1] = total - sum - b[0];
        cout << b[i] << " \n"[i == n - 1];
    }
}

signed main(){   
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}