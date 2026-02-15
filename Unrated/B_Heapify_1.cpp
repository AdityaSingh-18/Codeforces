// Problem Link https://codeforces.com/contest/2195/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1), visited(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<vector<int>> b(n + 1);
    for (int i = 1; i <= n; i++){
        if(visited[i])  continue;
        int j = i;
        while(j <= n){
            b[i].push_back(a[j]);
            visited[j] = 1;
            j *= 2;
        }
    }
    for (int i = 1; i <= n; i++){
        if(b[i].size() >= 1){
            sort(b[i].begin(), b[i].end());
            int k = 0;
            for (int j = i; j <= n; j *= 2){
                if(b[i][k] != j){
                    cout << "NO\n";
                    return;
                }
                k++;
            }
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