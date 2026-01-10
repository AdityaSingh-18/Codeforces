// Problem Link https://codeforces.com/contest/2121/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    int maxElement = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            maxElement = max(maxElement, a[i][j]);
        }
    }
    vector<pair<int, int>> b;
    unordered_map<int, int> freqRow, freqCol;
    int maxRow = 1, maxCol = 1, hasRow = -1, hasCol = -1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(maxElement == a[i][j]){
                b.push_back({i, j});
                freqRow[i]++;
                if (maxRow < freqRow[i]){
                    maxRow = freqRow[i];
                    hasRow = i;
                }
                freqCol[j]++;
                if (maxCol < freqCol[j]){
                    maxCol = freqCol[j];
                    hasCol = j;
                }
            }
        }
    }
    int k = b.size();
    if(maxCol >= k - 1 || maxRow >= k - 1){
        cout << maxElement - 1 << "\n";
        return;
    }
    for (int i = 0; i < k; i++){
        if(b[i].first != hasRow && b[i].second != hasCol){
            cout << maxElement << "\n";
            return;
        }
    }
    cout << maxElement - 1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
