// Problem Link https://codeforces.com/contest/1882/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, x;
    cin >> n;
    set<int> a;
    vector<set<int>> b(n);
    for (int i = 0; i < n; i++){
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> x;
            a.insert(x);
            b[i].insert(x);
        }
    }
    int maxCount = 0;
    for (auto &i : a){
        set<int> count;
        for (auto &j : b){
            if(!j.count(i)){
                for (auto &k : j){
                    count.insert(k);
                }
            }
        }
        maxCount = max(maxCount, (int)count.size());
    }
    cout << maxCount << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}