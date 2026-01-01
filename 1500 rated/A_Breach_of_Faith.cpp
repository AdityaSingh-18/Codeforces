// Problem Link https://codeforces.com/contest/2077/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n * 2);
    int sum = 0;
    for (auto &i : a)    cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n * 2 - 1; i++){
        if(i % 2)    sum -= a[i];
        else    sum += a[i];
    }
    sum += a[2 * n - 1];
    for (int i = 0; i < 2 * n; i++){
        if(i == 2 * n - 1)    cout << sum << " ";
        cout << a[i] << " \n"[i == 2 * n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}