// Problem Link https://codeforces.com/contest/2209/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n; i++){
        int up = 0, down = 0;
        for (int j = i + 1; j < n; j++){
            if(a[i] < a[j])    down++;
            else if(a[i] > a[j])    up++;
        }
        cout << max(up, down) << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}