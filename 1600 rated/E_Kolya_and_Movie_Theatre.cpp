// Problem Link https://codeforces.com/contest/1862/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    multiset<int> s;
    int maxSum = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int cur = sum + a[i] - d * (i + 1);
        maxSum = max(maxSum, cur);
        if (a[i] > 0) {
            s.insert(a[i]);
            sum += a[i];
            if (s.size() >= k) {
                sum -= *s.begin();
                s.erase(s.begin());
            }
        }
    }
    cout << maxSum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}