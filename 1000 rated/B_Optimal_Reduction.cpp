// Problem Link https://codeforces.com/contest/1713/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n - 1; i++){
        while(i < n - 1 && a[i] <= a[i + 1])    i++;
        while(i < n - 1 && a[i] >= a[i + 1])    i++;
        if(i != n - 1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}