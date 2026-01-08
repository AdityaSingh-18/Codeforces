// Problem Link https://codeforces.com/contest/2102/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x, first;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> x;
        a[i] = abs(x);
        if(i == 0)   first = a[i];
    }
    sort(a.begin(), a.end());
    if(n > 2 && first >= a[n / 2 + 1])  cout << "NO\n";
    else    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}