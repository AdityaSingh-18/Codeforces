// Problem Link https://codeforces.com/contest/1753/problem/A1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n % 2){
        cout << "-1\n";
        return;
    }
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i += 2){
        if(a[i] == a[i + 1])    b.push_back({i + 1, i + 2});
        else{
            b.push_back({i + 1, i + 1});
            b.push_back({i + 2, i + 2});
        }
    }
    int m = b.size();
    cout << m << "\n";
    for(int i = 0; i < m; i++){
        cout << b[i].first << " " << b[i].second << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}