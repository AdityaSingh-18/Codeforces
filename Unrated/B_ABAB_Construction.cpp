// Problem Link https://codeforces.com/contest/2202/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n % 2 && s[0] == 'b'){
        cout << "NO\n";
        return;
    }
    if(n % 2){
        for (int i = 1; i < n - 1; i += 2){
            if(s[i] != '?' && s[i + 1] != '?' && s[i] == s[i + 1]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    else{
        for (int i = 0; i < n - 1; i += 2){
            if(s[i] != '?' && s[i + 1] != '?' && s[i] == s[i + 1]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}