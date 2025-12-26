// Problem Link https://codeforces.com/contest/1770/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= (n + 1) / 2; i++){
        if(i == (n + 1) / 2 && n % 2){
            cout << i;
            continue;
        }
        cout << n - i + 1 << " " << i << " ";
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}