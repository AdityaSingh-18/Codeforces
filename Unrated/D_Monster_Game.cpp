// Problem Link https://codeforces.com/contest/2193/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), pref(n + 1);
    unordered_map<int, int> mp;
    for (auto &i : a) {
        cin >> i;
        mp[i]++;
    }
    for (auto &i : b) cin >> i;
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + b[i];
    }
    vector<pair<int,int>> freq;
    for (auto &p : mp) {
        freq.push_back(p);
    }
    sort(freq.rbegin(), freq.rend());
    int sum = 0, ans = 0;
    for (auto &[val, f] : freq) {
        sum += f;
        int it = upper_bound(pref.begin(), pref.end(), sum) - pref.begin() - 1;
        ans = max(ans, val * it);
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
