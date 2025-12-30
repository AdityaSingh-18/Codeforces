// Problem Link https://codeforces.com/contest/2182/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &i : a)    cin >> i;
    for (auto &i : b)    cin >> i;
    for (auto &i : c)    cin >> i;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = 0; j < n; j++) {
            if (a[j] >= b[(j + i) % n]) {
                flag = 0;
            }
        }
        if(flag)    count1++;
    }
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = 0; j < n; j++) {
            if (b[j] >= c[(j + i) % n]) {
                flag = 0;
            }
        }
        if(flag)    count2++;
    }
    int ans = n * count1 * count2;
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}