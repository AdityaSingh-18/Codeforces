// Problem Link https://codeforces.com/contest/2036/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector<char> layer(n * m);
    int count = 0;
    int k = min(n, m) / 2;
    for (int i = 0; i < k; i++) {
        int pos = 0;
        for (int j = i; j < m - i; j++, pos++){
            layer[pos] = a[i][j];
        }
        for (int j = i; j < n - i - 2; j++, pos++){
            layer[pos] = a[j + 1][m - i - 1];
        }
        for (int j = m - i - 1; j >= i; j--, pos++){
            layer[pos] = a[n - i - 1][j];
        }
        for (int j = n - i - 2; j > i; j--, pos++){
            layer[pos] = a[j][i];
        }
        for (int j = 0; j < pos; j++){
            if (layer[j] == '1' && layer[(j + 1) % pos] == '5' && layer[(j + 2) % pos] == '4' && layer[(j + 3) % pos] == '3'){
                count++;
            }
        }
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}