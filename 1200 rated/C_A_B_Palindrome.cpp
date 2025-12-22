// Problem Link https://codeforces.com/contest/1512/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++){
        if(s[i] == '0')    a--;
        else if(s[i] == '1')    b--;
        if(a < 0 || b < 0){
            cout << "-1\n";
            return;
        }
    }
    for (int i = 0; i < n / 2; i++){
        if(s[i] == '?' && s[n - 1 - i] == '?')    continue;
        else if(s[i] == '?'){
            s[i] = s[n - 1 -i];
            if(s[i] == '0')     a--;
            else    b--;
        }
        else if(s[n - 1 - i] == '?'){
            s[n - 1 - i] = s[i];
            if(s[i] == '0')    a--;
            else    b--;
        }
        else if(s[i] != s[n - 1 - i]){
            cout << -1 << "\n";
            return;
        }
        if(a < 0 || b < 0){
            cout << "-1" << "\n";
            return;
        }
    }
    for (int i = 0; i < n / 2; i++){
        if(s[i] == '?'){
            if(a > 1){
                s[i] = '0';
                s[n - 1 - i] = '0';
                a -= 2;
            }
            else if(b > 1){
                s[i] = '1';
                s[n - 1 - i] = '1';
                b -= 2;
            }
            else{
                cout << -1 << "\n";
                return;
            }
        }
    }
    if(n % 2 && s[(n - 1) / 2] == '?'){
        if(a > 0){
            s[(n - 1) / 2] = '0';
            a--;
        }
        else if(b > 0){
            s[(n - 1) / 2] = '1';
            b--;
        }
        else{
            cout << -1 << "\n";
            return;
        }
    }
    if(a != 0 || b != 0){
        cout << -1 << "\n";
        return;
    }
    cout << s << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}