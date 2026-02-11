// Problem Link https://codeforces.com/contest/2197/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), pos(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    for (auto &i : b)   cin >> i;
    vector<int> visited(n + 1);
    int prev = -1;    
    for (int i = 0; i < n; i++) {
        if (b[i] != prev) {
            if (visited[b[i]]) {
                cout << "NO\n";
                return;
            }
            if (prev != -1) {
                visited[prev] = 1;
                if (pos[prev] >= pos[b[i]]) {
                    cout << "NO\n";
                    return;
                }
            }
            prev = b[i];
        }
    }
    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}