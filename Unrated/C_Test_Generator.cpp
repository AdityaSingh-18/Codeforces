// Problem Link https://codeforces.com/contest/2203/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

int check(int s, int n, int m) {
    int x = s;
    for (int j = 62; j >= 0; j--) {
        if ((m >> j) & 1) {
            int y = min(n, x >> j);
            x -= (y << j);
        }
    }
    return (x ? 0 : 1);
}

void solve() {
    int s, m;
    cin >> s >> m;
    int bit = 1;
    while ((m & bit) == 0) {
        bit = bit << 1;
    }
    if (s % bit) {
        cout << -1 << "\n";
        return;
    }
    int low = 1, high = s, ans = s;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(s, mid, m)) {
            ans = mid;
            high = mid - 1;
        } 
        else    low = mid + 1;
    }
    cout << ans << "\n";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}