// Problem Link https://codeforces.com/contest/1774/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    vector<pair<int, int>> b;
    int totalOne = 0;
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] == 1)    count++;
        }
        b.push_back({count, i});
        totalOne += count;
    }
    if(totalOne % n){
        cout << "-1\n";
        return;
    }
    sort(b.begin(), b.end());
    int avg = totalOne / n, i = 0, j = n - 1;
    vector<array<int, 3>> c;
    while(i < j) {
        if(b[i].first == avg)    i++;
        else if(b[j].first == avg)    j--;
        else {
            for (int k = 0; k < m && b[i].first < avg && b[j].first > avg; k++){
                if(a[b[i].second][k] == 0 && a[b[j].second][k] == 1){
                    c.push_back({b[i].second + 1, b[j].second + 1, k + 1});
                    b[i].first++;
                    b[j].first--;
                    a[b[i].second][k] = 1;
                    a[b[j].second][k] = 0;
                }
            }
            if(b[i].first < avg)    j--;
            else    i++;
        }
    }
    int l = c.size();
    cout << l << "\n";
    for (int i = 0; i < l; i++){
        cout << c[i][0] << " " << c[i][1] << " " << c[i][2] << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}