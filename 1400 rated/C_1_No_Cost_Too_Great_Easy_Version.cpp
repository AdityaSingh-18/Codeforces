// Problem Link https://codeforces.com/contest/2154/problem/C1

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2 * 1e5;
vector<vector<int>> fact(N);

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)    cin >> i;
    for (auto &i : b)    cin >> i;
    map<int, int> c;
    int ans = 2;
    for (int i = 0; i < n; i++){
        for (int f : fact[a[i]]){
            if(c[f] > 0)    ans = 0;
            c[f]++;
        }
    }
    for (int i = 0; i < n; i++){
        for (int f : fact[a[i]])    c[f]--;
        for (int f : fact[a[i] + 1]){
            if(c[f] > 0)    ans = min (ans, 1);
        }
        for (int f : fact[a[i]])    c[f]++;
    }
    cout << ans << "\n";
}

int main(){
    for (int i = 2; i <= N; i++){
        if(!fact[i].empty())    continue;
        for (int j = i; j <= N; j += i){
            fact[j].push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}