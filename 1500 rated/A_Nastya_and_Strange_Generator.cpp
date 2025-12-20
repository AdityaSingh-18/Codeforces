// Problem Link https://codeforces.com/contest/1340/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i + 1;
    }
    vector<int> visited(n + 2);
    int x = pos[1] + 1;
    visited[pos[1]] = 1;
    for (int i = 2; i <= n; i++) {
        int cur = pos[i];
        if (x <= n && !visited[x]) {
            if (cur != x) {
                cout << "No\n";
                return;
            }
        }
        visited[cur]++;
        x = cur + 1;
    }
    cout << "Yes\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}