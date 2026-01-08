// Problem Link https://codeforces.com/contest/2183/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int l = k - 1, r = n - k;
    int ans = 1;
    for (int i = 0; i <= l; i++) {
        int low = -1, high = r + 1;
        while (low + 1 < high) {
            int mid = (low + high) / 2;
            if (i + mid + max(i, mid) - 1 <= m)      low = mid; 
            else     high = mid;
        }
        if (low >= 0)    ans = max(ans, i + low + 1);
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