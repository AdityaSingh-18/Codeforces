#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    vector<string> ans = grid;
    for (int i = 0; i < n; i++) {
        vector<int> cols;
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'U') {
                cols.push_back(j);
            }
        }
        if (cols.size() % 2 != 0) {
            cout << "-1\n";
            return;
        }
        int half = cols.size() / 2;
        for (int k = 0; k < (int)cols.size(); k++) {
            int j = cols[k];
            if (k < half) {
                ans[i][j] = 'B';
                ans[i + 1][j] = 'W';
            } 
            else {
                ans[i][j] = 'W';
                ans[i + 1][j] = 'B';
            }
        }
    }
    for (int j = 0; j < m; j++) {
        vector<int> rows;
        for (int i = 0; i < n; i++) {
            if (grid[i][j] == 'L') {
                rows.push_back(i);
            }
        }
        if (rows.size() % 2 != 0) {
            cout << "-1\n";
            return;
        }
        int half = rows.size() / 2;
        for (int k = 0; k < (int)rows.size(); k++) {
            int i = rows[k];
            if (k < half) {
                ans[i][j] = 'B';
                ans[i][j + 1] = 'W';
            } 
            else {
                ans[i][j] = 'W';
                ans[i][j + 1] = 'B';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}