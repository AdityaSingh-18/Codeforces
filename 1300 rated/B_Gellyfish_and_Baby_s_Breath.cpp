// Problem Link https://codeforces.com/contest/2116/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 1;
const int MOD = 998244353;
vector<int> s(N, 1);

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++){
        if(a[i] > a[x])     x = i;
        if(b[i] > b[y])     y = i;
        if(a[x] == b[y]){
            c[i] = (s[a[x]] + max(s[a[i - y]], s[b[i - x]])) % MOD;
        }
        else{
            if(a[x] > b[y])     c[i] = (s[a[x]] + s[b[i - x]]) % MOD;
            else    c[i] = (s[b[y]] + s[a[i - y]]) % MOD;
        }
    }
    for (int i = 0; i < n; i++){
        cout << c[i] << " \n"[i == n - 1];
    }
}

int main(){
    for (int i = 1; i < N; i++){
        s[i] = s[i - 1] * 2 % MOD;
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}