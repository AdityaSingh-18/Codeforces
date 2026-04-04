// Problem Link https://codeforces.com/contest/2218/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int maxElement = 0, sum = 0;
    vector<int> a(7);
    for (int i = 0; i < 7; i++){
        cin >> a[i];
        maxElement = max(maxElement, a[i]);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < 6; i++){
        sum += -a[i];
    }
    cout << sum + a[6] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}