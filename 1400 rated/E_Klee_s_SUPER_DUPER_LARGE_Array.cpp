// Problem Link https://codeforces.com/contest/2009/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    n += (m - 1);
    int totalSum = (n * (n + 1)) / 2 - (m * (m - 1)) / 2;
    int minDiff = 1e18, low = m, high = n;
    while(low <= high){
        int mid = (low + high) / 2;
        int sumMid = (mid * (mid + 1)) / 2 - (m * (m - 1)) / 2;
        minDiff = min(minDiff, abs(totalSum - (2 * sumMid)));
        if((totalSum - (2 * sumMid)) == 0)    break;
        else if((totalSum - (2 * sumMid)) > 0)    low = mid + 1;
        else    high = mid - 1;
    }
    cout << minDiff << "\n"; 
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}