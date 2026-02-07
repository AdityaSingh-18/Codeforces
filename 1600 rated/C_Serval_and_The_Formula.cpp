// Problem Link https://codeforces.com/contest/2085/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x, y;
    cin >> x >> y;
    if(x == y)      cout << "-1\n";
    else if(x + y == (x ^ y))      cout << "0\n";
    else{
        int k = 0;
        int z = max(x, y);
        for (int i = 0; i < 31; i++){
            if(z & (1 << i))     k = i + 1;
        }
        cout << (1LL << k) - z << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}