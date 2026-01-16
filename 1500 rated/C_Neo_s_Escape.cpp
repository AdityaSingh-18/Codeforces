// Problem Link https://codeforces.com/contest/2108/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    int k = 0, count = 0;
    for (int i = 1; i < n; i++){
        if(a[k] == a[i])    continue;
        k++;
        a[k] = a[i];
    }
    if(k == 0){
        cout << "1\n";
        return;
    }
    for (int i = 0; i <= k; i++){
        if(i > 0 && i < k){
            if(a[i] > a[i - 1] && a[i] > a[i + 1])   count++;
        }
        else if(i == 0){
            if(a[i] > a[i + 1])   count++;
        }
        else if(i == k){
            if(a[i] > a[i - 1])   count++;
        }
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