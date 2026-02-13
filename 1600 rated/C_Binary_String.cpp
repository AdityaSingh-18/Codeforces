// Problem Link https://codeforces.com/contest/1680/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> zero(n + 1), one(n + 1);
    for (int i = 0; i < n; i++){
        if(s[i] == '0'){
            zero[i + 1] = zero[i] + 1; 
            one[i + 1] = one[i];
        }
        else{
            one[i + 1] = one[i] + 1;
            zero[i + 1] = zero[i];
        }
    }
    int cost = 1e18, x = one[n];
    for (int i = 0; (i + x) <= n; i++){
        cost = min(cost, max(zero[i + x] - zero[i], x + one[i] - one[i + x]));
    }
    cout << cost << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}