// Problem Link https://codeforces.com/contest/1991/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 1; i < n; i++){
        if(a[0] % 2 != a[i] % 2){
            cout << "-1\n";
            return;
        }
    }
    vector<int> b;
    while(true){
        sort(a.begin(), a.end());
        if(a[n - 1] == 0){
            break;
        }
        int mid = (a[0] + a[n - 1]) / 2;
        b.push_back(mid);
        for (int i = 0; i < n; i++){
            a[i] = abs(a[i] - mid);
        }
    }
    int m = b.size();
    cout << m << "\n";
    for (int i = 0; i < m; i++){
        cout << b[i] << " \n"[i == m - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}