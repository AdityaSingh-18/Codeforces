// Problem Link https://codeforces.com/contest/2191/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(), t.end());
    vector<int> a;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i])  a.push_back(i);
    }
    int m = a.size();
    if (m == 0)    cout << "Bob" << '\n';
    else {
        cout << "Alice" << '\n';
        cout << m << '\n';
        for (int i = 0; i < m; i++) {
            cout << a[i] + 1 << " \n"[i == m - 1];
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}