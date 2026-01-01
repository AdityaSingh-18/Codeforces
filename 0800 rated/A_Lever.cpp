// Problem Link https://codeforces.com/contest/2131/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int sum = 1;
    vector<int> a(n), b(n);
    for(auto &i : a)   cin >> i;
    for(auto &i : b)   cin >> i;
    for(int i = 0; i < n; i++){
        sum += max(0LL, a[i] - b[i]);
    }
    cout<< sum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}