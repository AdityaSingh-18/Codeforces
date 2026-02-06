// Problem Link https://codeforces.com/contest/2109/problem/C3

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    cout << "mul 999999999\n";
    cin >> x;
    cout << "digit\n";
    cin >> x;
    if(n != 81){
        cout << "add " << n - 81 << "\n";
        cin >> x;
    }
    cout << "!\n";
    cin >> x;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}