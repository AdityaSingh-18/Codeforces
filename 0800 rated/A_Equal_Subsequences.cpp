// Problem Link https://codeforces.com/contest/2118/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    n -= k;
    while(k--)    cout << '1';
    while(n--)  cout << '0';
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}