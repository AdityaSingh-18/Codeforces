// Problem Link https://codeforces.com/contest/2202/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x, y;
    cin >> x >> y;
    if(y > 0)    x -= (2 * y);
    else if(y < 0)    x -= (4 * y * -1);
    if(x >= 0 && x % 3 == 0)  cout << "YES\n";
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}