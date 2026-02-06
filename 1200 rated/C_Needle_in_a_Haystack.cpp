// Problem Link https://codeforces.com/contest/2175/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<int> freq1(26), freq2(26);
    for (int i = 0; i < n; i++)    freq1[s[i] - 'a']++;
    for (int i = 0; i < m; i++)    freq2[t[i] - 'a']++;
    string extra = "";
    for (int i = 0; i < 26; i++) {
        if (freq1[i] > freq2[i]) {
            cout << "Impossible" << endl;
            return;
        }
        for (int k = 0; k < freq2[i] - freq1[i]; ++k) {
            extra += (char)('a' + i);
        }
    }
    string ans = "";
    int i = 0, j = 0, k = extra.size();
    while (i < n && j < k) {
        if (extra[j] < s[i]) {
            ans += extra[j];
            j++;
        } 
        else{
            ans += s[i];
            i++;
        }
    }
    while (j < k){
        ans += extra[j];
        j++;
    }
    while (i < n){
        ans += s[i];
        i++;
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