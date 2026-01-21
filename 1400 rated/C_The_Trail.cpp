// Problem Link https://codeforces.com/contest/2055/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<int>> a(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int x = 0, y = 0;
    for (char c : s) {
        if (c == 'D') {
            int sum = 0;
            for (int i = 0; i < m; i++) {
                sum += a[x][i];
            }
            a[x][y] = -sum;
            x++;
        } 
        else {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += a[i][y];
            }
            a[x][y] = -sum;
            y++;
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[n - 1][i];
    }
    a[n - 1][m - 1] = -sum;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " \n"[j == m - 1];
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