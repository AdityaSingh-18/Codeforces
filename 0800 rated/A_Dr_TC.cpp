// Problem Link https://codeforces.com/contest/2106/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '1')   one++;
        else    zero++;
    }
    cout << one * (one - 1) + zero * (one + 1) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}