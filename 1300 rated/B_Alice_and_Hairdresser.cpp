// Problem Link https://codeforces.com/contest/1055/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > l && (i == 0 || a[i - 1] <= l)) {
            ans++;
        }
    }
    while(m--){
        int x;
        cin >> x;
        if(x == 1){
            int p, d;
            cin >> p >> d;
            p--;
            if (a[p] <= l && a[p] + d > l) {
                if (p == 0 || a[p - 1] <= l)      ans++;
                if (p < n - 1 && a[p + 1] > l)     ans--;
            }
            a[p] += d;
        }
        else    cout << ans << "\n";
    }
}

signed main(){
    solve();
}
