// Problem Link https://codeforces.com/contest/2205/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int j = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            j *= i;
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n > 1)    j *= n;
    cout << j << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}