// Problem Link https://codeforces.com/contest/1764/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++){
        cin >> x;
        freq[x]++;
    }
    if(freq.size() == 1) {
        cout << n / 2 << "\n";
        return;
    }
    int ans = 0, curr = 0;
    for (auto &[val, f] : freq){
        curr += f;
        ans = max(ans, curr * (n - curr));
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