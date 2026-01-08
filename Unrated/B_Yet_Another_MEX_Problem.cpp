// Problem Link https://codeforces.com/contest/2183/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n, k, x;
    cin >> n >> k;
    set<int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    int mex = 0;
    while(a.count(mex)){
        mex++;
    }
    cout << min(k - 1, mex) << "\n";
}
 
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}