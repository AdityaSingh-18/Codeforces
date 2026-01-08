// Problem Link https://codeforces.com/contest/2183/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    if(a[0] == 1 || a[n - 1] == 1)  cout << "Alice\n";
    else    cout << "Bob\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}