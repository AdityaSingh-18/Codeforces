// Problem Link https://codeforces.com/contest/2117/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(i == 2)     continue;
        cout << i << " ";
    }
    cout << 2 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}