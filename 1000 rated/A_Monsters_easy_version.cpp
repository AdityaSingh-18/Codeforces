// Problem Link https://codeforces.com/contest/1784/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int k = 1, sum = 0;
    for (int i = 0; i < n; i++){
        if(a[i] < k)    continue;
        if(a[i] != k)    sum += a[i] - k;
        k++;
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