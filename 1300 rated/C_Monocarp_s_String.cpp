// Problem Link https://codeforces.com/problemset/problem/2145/C

#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void solve(){ 
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    vector<int> a(n); 
    for (int i = 0; i < n; i++){ 
        a[i] = s[i] == 'a' ? 1 : -1; 
    } 
    int sum = accumulate(a.begin(), a.end(), 0); 
    if(sum == 0){ 
        cout << 0 << "\n"; 
        return; 
    } 
    unordered_map<int, int> last;
    last[0] = 0;
    int ans = n, pref = 0;
    for (int i = 1; i <= n; i++) {
        pref += a[i - 1];
        if (last.count(pref - sum)) {
            ans = min(ans, i - last[pref - sum]);
        }
        last[pref] = i;
    }
    if (ans == n)   cout << -1 << "\n";
    else    cout << ans << "\n"; 
} 

signed main(){ 
    int t; 
    cin >> t; 
    while(t--){ 
        solve(); 
    } 
}