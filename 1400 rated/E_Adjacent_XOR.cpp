// Problem Link https://codeforces.com/contest/2131/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    if(a[n - 1] != b[n - 1]){
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n - 1; i++){
        if(b[i] != a[i] && b[i] != (a[i] ^ a[i + 1]) && b[i] != (a[i] ^ b[i + 1])){
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