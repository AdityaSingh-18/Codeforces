// Problem Link https://codeforces.com/contest/2107/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int last = -1;
    for (int i = 0; i < n; i++){
        if (s[i] == '0'){
            last = i;
            a[i] = -1e9;
        }
    }
    int maxSub = 0, curr = 0;
    for (int i = 0; i < n; i++){
        curr = max(curr + a[i], a[i]);
        maxSub = max(maxSub, curr);
    }
    if (maxSub > k || (maxSub != k && last == -1)){
        cout << "No\n";
        return;
    }
    if (last != -1){
        int leftSub = 0, curr = 0;
        for (int i = last + 1; i < n; i++){
            curr += a[i];
            leftSub = max(leftSub, curr);
        }
        int rightSub = 0;
        curr = 0;
        for (int i = last - 1; i >= 0; i--){
            curr += a[i];
            rightSub = max(rightSub, curr);
        }
        a[last] = k - leftSub - rightSub;
    }
    cout << "Yes\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}