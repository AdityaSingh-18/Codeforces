// Problem Link https://codeforces.com/contest/2037/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, L;
    cin >> n >> m >> L;
    vector<pair<int,int>> hurdle(n), power(m);
    for(int i = 0; i < n; i++){
        cin >> hurdle[i].first >> hurdle[i].second;
    }
    for(int i = 0; i < m; i++){
        cin >> power[i].first >> power[i].second;
    }
    priority_queue<int> Q;
    int ans = 0, k = 1, j = 0;
    for(int i = 0; i < n; i++)
    {
        while(j < m && power[j].first < hurdle[i].first){
            Q.push(power[j].second);
            j++;
        }
        int need = hurdle[i].second - hurdle[i].first + 2;
        while(k < need && !Q.empty()){
            k += Q.top();
            Q.pop();
            ans++;
        }
        if(k < need){
            cout << "-1\n";
            return;
        }
    }
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}