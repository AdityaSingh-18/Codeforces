// Problem Link https://codeforces.com/contest/2202/problem/C1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 1, prev = a[0];
    for (int i = 1; i < n; i++){
        if(a[i] == prev)    count++;
        else if((a[i] - a[i - 1]) > 1){
            prev = a[i];
            count++;
        }
        else if(a[i] <= a[i - 1] && a[i] <= prev){
            prev = a[i];
            count++;
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