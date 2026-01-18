// Problem Link https://codeforces.com/contest/2185/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    b = a;
    set<int> c;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        a[x - 1] += y;
        c.insert(x - 1);   
        if(a[x - 1] > h){
            for(auto j : c){
                a[j] = b[j];
            }
            c.clear();
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}