// Problem Link https://codeforces.com/contest/1744/problem/E1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int div = a * b,  x = 0;
    for (int i = a + 1; i <= c; i++){
        int need = div * i / gcd(div, i) / i;
        int j = (b / need + 1) * need;
        if(j <= d){
            cout << i << " " << j << "\n";
            return;
        }
    }
    cout << "-1 -1\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}