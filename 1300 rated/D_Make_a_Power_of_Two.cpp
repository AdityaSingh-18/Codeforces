// Problem Link https://codeforces.com/contest/1560/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    vector<string> a;
    for (int i = 1; i <= 1e18; i *= 2){
        a.push_back(to_string(i));
    }
    int n = s.size(), m = a.size();
    int minNeed = 1e9;
    for (int i = 0; i < m; i++){
        int p = a[i].size(), common = 0;
        for (int j = 0, k = 0; j < n && k < p; j++){
            if(s[j] == a[i][k]){
                common++;
                k++;
            }
        }
        minNeed = min(minNeed, (n + p - 2 * common));
    }
    cout << minNeed << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}