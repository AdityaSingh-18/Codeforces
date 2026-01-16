// Problem Link https://codeforces.com/contest/2157/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < q; i++) {
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 1) {
            for (int j = l - 1; j < r; j++){
                a[j] = 1;
            }
        } 
        else {
            for (int j = l - 1; j < r; j++){
                b[j] = 1;
            }
        }
    }
    int mex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] && b[i]) {
            c[i] = k + 1;
        } 
        else if (a[i]) {
            c[i] = k;
        } 
        else if (b[i]) {
            c[i] = mex % k;
            mex++;
        } 
        else {
            c[i] = 0; 
        }
    }
    for (int i = 0; i < n; i++) {
        cout << c[i] << " \n"[i == n - 1];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}