// Problem Link https://codeforces.com/problemset/problem/803/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n + 2, 1e18);
    for (int i = 0, j = 1; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            b[j] = i;
            j++;
        }
    }
    for (int i = 0, j = 0; i < n; i++){
        if(i > b[j + 1])    j++;
        cout << min(abs(i - b[j]), abs(i - b[j + 1])) << " \n"[i == n - 1];
    }
}

signed main(){
    solve();
}