// Problem Link https://codeforces.com/contest/2117/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, x;
    cin >> n >> x;
    int l = -1, r = -1;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1){
            if(l == -1)    l = i;
            r = i;
        }
    }
    if(r - l < x)   cout << "YES\n";
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}