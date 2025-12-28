// Problem Link https://codeforces.com/contest/2178/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int yes = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == 'Y')    yes++;
        if(yes > 1){
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