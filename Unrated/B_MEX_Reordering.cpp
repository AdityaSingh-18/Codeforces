// Problem Link https://codeforces.com/contest/2191/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int zero = 0, one = 0;
    for (auto &i : a){
        cin >> i;
        if(i == 0)    zero++;
        if(i == 1)    one = 1;
    } 
    if(zero == 1 || (zero > 1 && one))    cout << "YES\n";
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}