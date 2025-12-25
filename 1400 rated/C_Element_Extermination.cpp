// Problem Link https://codeforces.com/contest/1375/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    if(a[0] < a[n - 1])     cout << "YES\n";
    else    cout << "NO\n";
}
 
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}