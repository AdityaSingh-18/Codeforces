// Problem Link https://codeforces.com/contest/2195/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int found = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 67)     found = 1;
    }
    if(found)   cout << "YES\n";
    else    cout << "NO\n"; 
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}