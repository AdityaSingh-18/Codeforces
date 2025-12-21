// Problem Link https://codeforces.com/problemset/problem/1899/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int j = 0;
    for (int i = 1; i < n; i++){
        if(a[i] < a[j]){
            j = i;
        }
    }
    for (int i = j; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            cout << -1 << "\n";
            return;
        }
    }
    cout << j << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}