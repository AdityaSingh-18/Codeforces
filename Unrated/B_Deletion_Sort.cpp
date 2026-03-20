// Problem Link https://codeforces.com/contest/2200/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int count = n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0 && a[i] < a[i - 1])    count = 1;
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}