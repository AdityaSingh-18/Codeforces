// Problem Link https://codeforces.com/contest/2205/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int j = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == n)   j = i;
    }
    swap(a[0], a[j]);
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