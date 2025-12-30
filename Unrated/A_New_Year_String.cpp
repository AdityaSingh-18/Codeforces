// Problem Link https://codeforces.com/contest/2182/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < n - 3; i++){
        if(s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2'){
            if(s[i + 3] == '6'){
                cout << 0 << "\n";
                return;
            }
            if(s[i + 3] == '5')    flag = 1;
        }
    }
    if(flag)    cout << 1 << "\n";
    else    cout << 0 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}