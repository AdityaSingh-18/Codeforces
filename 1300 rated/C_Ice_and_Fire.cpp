// Problem Link https://codeforces.com/contest/1774/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << 1 << " ";
    int j = 1;
    for (int i = 1; i < n; i++){
        if(s[i] == s[i - 1])    cout << j << " ";
        else{
            cout << i + 1 << " ";
            j = i + 1;
        }
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}