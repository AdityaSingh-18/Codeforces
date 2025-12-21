// Problem Link https://codeforces.com/problemset/problem/812/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    vector<vector<int>> a(4, vector<int> (4));
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        if(a[i][3]){
            if(a[i][0] || a[i][1] || a[i][2] || a[(i + 1) % 4][0] || a[(i - 3) % 4][2] || a[(i + 2) % 4][1]){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

signed main(){
    solve();
}