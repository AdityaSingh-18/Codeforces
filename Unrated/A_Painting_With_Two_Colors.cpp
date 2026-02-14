// Problem Link https://codeforces.com/contest/2134/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

string check(int a, int b, int x){
    return a > b ? (a % 2 == x && b % 2 == x ? "YES\n" : "NO\n") : (b % 2 == x ? "YES\n" : "NO\n"); 
}

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    string s = n % 2 ? check(a, b, 1) : check(a, b, 0);
    cout << s;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}