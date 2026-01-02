// Problem Link https://codeforces.com/contest/2002/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    int flag = 1;
    for (int i = 0; i < n; i++){
        if(a[i] != b[i]){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "Bob\n";
        return;
    }
    flag = 1;
    for (int i = 0; i < n; i++){
        if(a[i] != b[n - 1 - i]){
            flag = 0;
            break;
        }
    }
    if(flag)    cout << "Bob\n";
    else    cout << "Alice\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}