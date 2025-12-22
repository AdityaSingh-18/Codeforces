// Problem Link https://codeforces.com/contest/1821/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int minNeed = n + 1;
    for (char c = 'a'; c <= 'z'; c++) {
        int count = 0, need = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != c)   count++;
            else{ 
                need = max(need, (int)log2(count) + 1);
                count = 0;
            }
        }
        need = max(need, (int)log2(count) + 1);
        minNeed = min(minNeed, need);
    }
    cout << minNeed << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}