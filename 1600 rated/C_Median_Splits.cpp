// Problem Link https://codeforces.com/contest/2103/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

bool checkPossible(vector<int> &a, int n, int k) {
    int s = 0, first = n + 1, last = -1;
    for (int i = 0; i < n; i++) {
        s += a[i];
        if (s >= 0) {
            first = i;
            break;
        }
    }
    s = 0;
    for (int i = n - 1; i >= 0; i--) {
        s += a[i];
        if (s >= 0) {
            last = i;
            break;
        }
    }
    if (first + 1 < last)   return true;
    vector<int> suff(n + 1), minSuff(n + 1);
    for (int i = n - 1; i >= 0; i--) {
        suff[i] = suff[i + 1] + a[i];
        minSuff[i] = min(minSuff[i + 1], suff[i]);
    }
    s = 0;
    for (int i = 0; i < n - 2; i++) {
        s += a[i];
        if (s < 0)   continue;
        if (suff[i + 1] >= minSuff[i + 2]){
            return true;
        }
    }
    reverse(a.begin(), a.end());
    for (int i = n - 1; i >= 0; i--) {
        suff[i] = suff[i + 1] + a[i];
        minSuff[i] = min(minSuff[i + 1], suff[i]);
    }
    s = 0;
    for (int i = 0; i < n - 2; i++) {
        s += a[i];
        if (s < 0)    continue;
        if (suff[i + 1] >= minSuff[i + 2]){
            return true;
        }
    }
    return false;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= k)    a[i] = 1;
        else    a[i] = -1;
    } 
    if (checkPossible(a, n, k))    cout << "YES\n";
    else    cout << "NO\n";
}

signed main() {
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
