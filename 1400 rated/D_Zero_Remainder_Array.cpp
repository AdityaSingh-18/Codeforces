// Problem Link https://codeforces.com/contest/1374/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<int, int> freq;
    for (int i = 0; i < n; i++){
        int r = a[i] % k;
        if(r == 0)   continue;
        int need = (k - r) % k;
        freq[need]++;
    }
    if(freq.empty()){
        cout << 0 << "\n";
        return;
    }
    int maxNeed = 0;
    for (auto &[i, f] : freq){
        int last = i + (f - 1) * k;
        maxNeed = max(maxNeed, last);
    }
    cout << maxNeed + 1 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}