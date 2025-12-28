// Problem Link https://codeforces.com/contest/2134/problem/A 

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    if(n % 2 == b % 2){
        if(a > b){
            if(b % 2 == a % 2){
                cout << "YES\n";
            }
            else    cout << "NO\n";
        }
        else    cout << "YES\n";
    }
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}