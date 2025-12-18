// Problem Link https://codeforces.com/problemset/problem/2160/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int m = a.size();
    for (int i = 0; i < m; i++){
        if(a[i] != i){
            cout << i << "\n";
            return;
        }
    }
    cout << m << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}