// Problem Link https://codeforces.com/contest/2180/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &i : a){
        cin >> i;
    }
    string s = a[0];
    for (int i = 1; i < n; i++) {
        string left = a[i] + s;
        string right = s + a[i];
        s = min(left, right);
    }
    cout << s << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}