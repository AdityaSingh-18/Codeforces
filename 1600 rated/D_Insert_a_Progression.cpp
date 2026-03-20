// Problem Link https://codeforces.com/contest/1671/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int sumDiff = 0, maxElement = 0, minElement = 1e18;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        minElement = min(minElement, a[i]);
        maxElement = max(maxElement, a[i]);
        if(i == 0)   continue;
        sumDiff += abs(a[i] - a[i - 1]);
    }
    sumDiff += min({a[0] - 1, a[n - 1] - 1, 2 * (minElement - 1)});
    if(x > maxElement){
        sumDiff += min({abs(x - a[0]), abs(x - a[n - 1]), 2 * (x - maxElement)});
    }
    cout << sumDiff << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}