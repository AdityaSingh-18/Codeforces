// Problem Link https://codeforces.com/contest/2118/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    cout << n * 2 - 1 << "\n";
    for (int i = 1; i <= n; i++){
        cout << i << " " << 1 << " " << i << "\n";
        if(i + 1 <= n)  cout << i << " " << i + 1 << " " << n << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}