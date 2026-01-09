// Problem Link https://codeforces.com/contest/2106/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    int maxElement = 0, minElement = 1e9, count = 0;
    for (auto &i : a){
        cin >> i;
        minElement = min (minElement, i);
        maxElement = max (maxElement, i);
    }
    for (auto &i : b){
        cin >> i;
        if(i == -1)     count++;
    }
    if(count == n){
        cout << minElement + k - maxElement + 1 << "\n";
        return;
    }
    int sum;
    for (int i = 0; i < n; i++){
        if(b[i] == -1)     continue;
        sum = a[i] + b[i];
        break;
    }
    for (int i = 0; i < n; i++){
        if(b[i] == -1){
            if(a[i] > sum || (a[i] + k) < sum){
                cout << 0 << "\n";
                return;
            }
        }
        else if(sum != (a[i] + b[i])){
            cout << 0 << "\n";
            return;
        }
    }
    cout << 1 << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}