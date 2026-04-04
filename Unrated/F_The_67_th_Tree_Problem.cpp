// Problem Link https://codeforces.com/contest/2218/problem/F

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int t){
    int x, y;
    cin >> x >> y;
    int n = x + y;
    if (x > n / 2 || (n % 2 == 0 && x == 0)){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int m = x * 2;
    if (n % 2)   m++;
    for (int i = 1; i < m; i++){
        cout << i << " " << i + 1 << "\n";
    }
    for (int i = m + 1; i <= n; i++){
        cout << 1 << " " << i << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve(t);
    }
}