// Problem Link https://codeforces.com/contest/2113/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++)    cin >> a[i];
    vector<vector<int>> sum(n + 1, vector<int> (m + 1));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + (a[i][j] == 'g');
        }
    }
    int totalGold = sum[n][m];
    int count = totalGold;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i][j] == '.'){
                int x1 = min(i + k, n);
                int x2 = max(i - k + 1, 0);
                int y1 = min(j + k, m);
                int y2 = max(j - k + 1, 0);
                count = min (count, sum[x1][y1] + sum[x2][y2] - sum[x1][y2] - sum[x2][y1]);
            }
        }
    }
    cout << totalGold - count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}