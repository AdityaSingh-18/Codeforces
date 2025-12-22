// Problem Link https://codeforces.com/contest/1706/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int sumOdd = 0;
    for (int i = 1; i < n - 1; i += 2){
        int neigh = max(a[i - 1], a[i + 1]);
        sumOdd += max(0LL, (neigh + 1 - a[i]));
    }
    if(n % 2){
        cout << sumOdd << "\n";
    }
    else{
        int minCost = sumOdd;
        for (int i = n - 2; i > 0; i -= 2) {
            int neigh1 = max(a[i - 1], a[i + 1]);
            sumOdd += max(0LL, (neigh1 + 1 - a[i]));
            int neigh2 = max(a[i - 2], a[i]);
            sumOdd -= max(0LL, (neigh2 + 1 - a[i - 1]));
            minCost = min(minCost, sumOdd);
        }
        cout << minCost << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}