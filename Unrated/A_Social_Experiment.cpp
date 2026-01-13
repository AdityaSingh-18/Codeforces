// Problem Link https://codeforces.com/contest/2184/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    if(n <= 3)      cout << n << "\n";
    else if(n % 2)      cout << 1 << "\n";   
    else      cout << 0 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}