// Problem Link https://codeforces.com/contest/1056/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, x;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++){
        cin >> m;
        for (int i = 0; i < m; i++){
            cin >> x;
            freq[x]++;
        }
    }
    for (auto &[val, f] : freq){
        if(f == n){
            cout << val << " ";
        }
    }
    cout << "\n";
}

signed main(){
    solve();
}