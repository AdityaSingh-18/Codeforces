// Problem Link https://codeforces.com/contest/2104/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int sum = (a + b + c);
    int avg = sum / 3;
    if((avg < a || avg < b) || sum % 3 != 0){
        cout << "NO\n";
        return;
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