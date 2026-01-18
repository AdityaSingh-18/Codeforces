// Problem Link https://codeforces.com/contest/2185/problem/C

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
    a.erase(unique(a.begin(), a.end()), a.end());
    int m = a.size();
    int maxCount = 1, count = 1, j = a[0];
    for (int i = 1; i < m; i++){
        if(a[i] == j + 1){
            j = a[i];
            count++;
        }
        else{
            count = 1;
            j = a[i];
        }
        maxCount = max(maxCount, count);
    }
    cout << maxCount << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}