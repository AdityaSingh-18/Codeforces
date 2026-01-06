//Problem Link https://codeforces.com/contest/1976/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool password = true, letter = false;
    for (int i = 0; i < n - 1; i++){
        if(s[i] > s[i + 1] || (letter && s[i] < 'a' || s[i] > 'z')){
            password = false;
            break;
        }
        if(s[i] >= 'a' && s[i] <= 'z')    letter = true;
    }
    if(password)      cout << "YES\n";
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}