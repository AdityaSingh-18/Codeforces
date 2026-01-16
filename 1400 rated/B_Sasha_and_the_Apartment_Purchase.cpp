// Problem Link https://codeforces.com/contest/2098/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    int minBar = n - k;
    vector<int> a(n);
    map<int, int> freq;
    for (auto &i : a){
        cin >> i;
        freq[i]++;
    }
    int sum = 0, l = 1e9, r = 1;
    for (auto &f : freq)
    {
        int x = f.first, count = f.second;
        if ((sum + count) * 2 >= minBar && (sum - k) * 2 <= minBar){
            l = min(l, x);
            r = max(r, x);
        }
        sum += count;
    }
    cout << r - l + 1 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}