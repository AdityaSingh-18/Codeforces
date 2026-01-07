// Problem Link https://codeforces.com/contest/2157/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    x = abs(x), y = abs(y);
    string s;
    cin >> s;
    if(x > n || y > n){
        cout << "NO\n";
        return;
    }
    int eight = 0, z = x + y - n;
    for (int i = 0; i < n; i++){
        if(s[i] == '8')    eight++;
    }
    if(z <= eight)   cout << "YES\n";
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}