// Problem Link https://codeforces.com/contest/2188/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    for (int i = (n + 1) / 2, j = 0; j < n; ){
        if(j % 2)    i += j;
        else    i -= j;
        cout << i << " ";
        j++;
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}