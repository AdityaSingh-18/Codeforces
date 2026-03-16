// Problem Link https://codeforces.com/contest/2204/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 1, i = 0;
    while(i < n && s[i] == 'R'){
        count++;
        i++;
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}