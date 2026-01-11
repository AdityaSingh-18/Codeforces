// Problem Link https://codeforces.com/contest/2109/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<int> grid = {a, m, n - a + 1, m, n, b, n, m - b + 1};
    int ans = n + m;
    for (int i = 0; i < 8; i += 2){
        int count = 0;
        while(grid[i] > 1){
            grid[i] = (grid[i] + 1) / 2;
            count++;
        }
        while (grid[i + 1] > 1){
            grid[i + 1] = (grid[i + 1] + 1) / 2;
            count++;
        }
        ans = min (ans, count);
    }
    cout << ans + 1 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}