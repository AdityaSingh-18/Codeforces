// Problem Link https://codeforces.com/contest/2104/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, q;
    string s;
    cin >> n >> k >> s;
    vector<int> a(n + 1);
    vector<vector<int>> next(n + 2, vector<int>(k, n));
    for (int i = n - 1; i >= 0; i--) {
        next[i] = next[i + 1];
        int maxElement = *max_element(next[i].begin(), next[i].end());
        a[i] = a[maxElement] + 1;
        next[i][s[i] - 'a'] = i;
    }
    cin >> q;
    while(q--){
        string t; 
        cin >> t;
        int pos = -1;
        for (char c : t){
            pos = next[pos + 1][c - 'a'];
        }
        cout << a[pos] << "\n";
    }
}

signed main(){
    solve();
}
