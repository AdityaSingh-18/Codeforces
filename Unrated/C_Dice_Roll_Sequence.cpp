// Problem Link https://codeforces.com/contest/2195/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    int count = 0;
    for (int i = 1; i < n; i++){
        if(a[i] == a[i - 1] || a[i] + a[i - 1] == 7){
            count++;
            i++;
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