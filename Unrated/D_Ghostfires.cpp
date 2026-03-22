// Problem Link https://codeforces.com/contest/2209/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int r, g, b;
    cin >> r >> g >> b;
    vector<pair<int, char>> a = {{r, 'R'}, {g, 'G'}, {b, 'B'}};
    sort(a.rbegin(), a.rend());
    int first = a[0].first;
    int rem = a[1].first + a[2].first;
    if (first > rem) {
        int n = 2 * rem + 1;
        string s(n, ' ');
        for (int i = 0; i < n; i += 2) {
            s[i] = a[0].second;
        }
        int odd = 1;
        for (int i = 1; i <= 2; i++) {
            for (int j = 0; j < a[i].first; j++) {
                s[odd] = a[i].second;
                odd += 2;
            }
        }
        cout << s << "\n";
    }
    else {
        int n = r + g + b;
        string s(n, ' ');
        vector<int> b;
        for (int i = 1; i < n; i += 2){
            b.push_back(i);
        }
        for (int i = 0; i < n; i += 2){
            b.push_back(i);
        }
        int k = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < a[i].first; j++) {
                s[b[k]] = a[i].second;
                k++;
            }
        }
        cout << s << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}