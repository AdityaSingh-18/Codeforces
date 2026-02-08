// Problem Link https://codeforces.com/contest/2194/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> a(m);
    for (auto &i : a)    cin >> i;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i)    continue;
        string ans = "";
        int flag = 1;
        for (int j = 0; j < i; j++) {
            vector<int> b(26, 1);
            for (int k = j; k < n; k += i) {
                vector<int> c(26);
                for (int p = 0; p < m; p++) {
                    c[a[p][k] - 'a'] = 1;
                }
                for (int p = 0; p < 26; p++) {
                    if(!b[p] || !c[p])  b[p] = 0;
                }
            }
            int found = 0;
            for (int k = 0; k < 26; k++) {
                if (b[k]) {
                    ans += 'a' + k;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                flag = 0;
                break;
            }
        }   
        if (flag){
            string res = "";
            for (int j = 0; j < n; j++) {
                res += ans[j % i];
            }
            cout << res << "\n";
            return;
        }
    }
    cout << a[0] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}