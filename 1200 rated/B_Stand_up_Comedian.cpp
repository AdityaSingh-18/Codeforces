// Problem Link https://codeforces.com/contest/1792/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 1;
    if(a > 0){
        if(b || c || d){
            count += a + min(a, abs(b - c) + d - 1) + 2 * min(b , c);
        }
        else    count = a;
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}