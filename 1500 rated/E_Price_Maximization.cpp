// Problem Link https://codeforces.com/contest/1690/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i] / k;
        b[i] = a[i] % k;
    }
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    while(l < r){
        if(b[l] + b[r] >= k){
            sum++;
            l++;
            r--;
        } 
        else    l++;
    }
    cout << sum << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}