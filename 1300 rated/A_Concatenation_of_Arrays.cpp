// Problem Link https://codeforces.com/contest/2023/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](const pair<int, int> &p1, const pair<int, int> &p2){
        return p1.first + p1.second < p2.first + p2.second;
    });
    for (int i = 0; i < n; i++){
        cout << a[i].first << " " << a[i].second << " \n"[i == n - 1];
    }  
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}