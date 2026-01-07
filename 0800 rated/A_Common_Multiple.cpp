// Problem Link https://codeforces.com/contest/2103/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}