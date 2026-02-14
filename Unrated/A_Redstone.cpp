// Problem Link https://codeforces.com/contest/2133/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;    
    set<int> a;
    int flag = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if(a.count(x))    flag = 1;
        a.insert(x);
    }
    if(flag)    cout << "YES\n";
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}