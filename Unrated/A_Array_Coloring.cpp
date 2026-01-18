// Problem Link https://codeforces.com/contest/2191/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n - 2; i++){
        if(abs(a[i] - a[i + 2]) % 2){
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