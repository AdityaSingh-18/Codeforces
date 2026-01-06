// Problem Link https://codeforces.com/contest/2114/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i <= sqrt(n); i++){
        if(i * i == n){
            cout << 0 << " " << i << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}