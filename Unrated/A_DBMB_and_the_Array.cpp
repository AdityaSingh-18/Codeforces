// Problem Link https://codeforces.com/contest/2193/problem/A 

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum > s || (s - sum) % x)    cout << "NO\n";
    else    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}