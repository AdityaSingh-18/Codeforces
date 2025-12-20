// Problem Link https://codeforces.com/contest/1617/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    set<int> a;
    for (int i = 0; i <= n; i++){
        a.insert(i);
    }
    vector<int> need;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if(a.find(x) != a.end())    a.erase(x);
        else    need.push_back(x);
    }
    int m = need.size();
    sort(need.rbegin(), need.rend());
    for (int i = 0; i < m; i++){
        int last = *a.rbegin();
        if(last > (need[i] - 1) / 2){
            cout << -1 << "\n";
            return;
        }
        a.erase(last);
    }
    cout << m << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}