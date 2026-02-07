// Problem Link https://codeforces.com/contest/1497/problem/C1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    if(n % 2){
        cout << n / 2 << " " << n / 2 << " " << 1 << "\n";
    }
    else if(n % 4){
        cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << "\n";
    }
    else{
        cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}