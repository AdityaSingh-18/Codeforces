// Problem Link https://codeforces.com/contest/2184/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

int nCr(int n, int k) {
    int res = 1;
    for (int i = 0; i < k; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

void solve(){
    int n, k;
    cin >> n >> k;
    int d = 0, m = n;
    while (m > 1) {
        m /= 2;
        d++;
    }
    int count = 0;
    for (int i = 0; i <= d; i++) {
        for (int j = 0; j <= i; j++) {
            if ((j + i) < k) {
                if (i < d)      count += nCr(i, j); 
                else if(j == 0)     count++;
            }
        }
    }
    cout << n - count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}