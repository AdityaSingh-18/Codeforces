// Problem Link https://codeforces.com/contest/1373/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a < c)    cout << "1 ";
    else    cout << "-1 ";
    if(a * b > c)   cout << b << "\n";
    else    cout << "-1\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}