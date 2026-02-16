// Problem Link https://codeforces.com/contest/2194/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    int sum = 0;
    for (auto &i : a){
        for (auto &j : i){
            cin >> j;
            sum += j;
        }
    }
    int x = sum / 2;
    cout << ((sum + 1) / 2) * (sum / 2) << "\n";
    for (int i = 0; i < n; i++){
        for (int j = m - 1; j >= 0; j--){
            sum -= a[i][j];
            if(sum == x){
                for (int k = 0; k < i; k++)    cout << "D";
                for (int k = 0; k < j; k++)    cout << "R";
                cout << "D";
                for (int k = j; k < m; k++)    cout << "R";
                for (int k = i + 1; k < n; k++)    cout << "D";
                cout << "\n";
                return;
            }
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}