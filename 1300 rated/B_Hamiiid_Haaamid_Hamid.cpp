// Problem Link https://codeforces.com/problemset/problem/2127/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    if (x == 1 || x == n){
        cout << "1\n";
        return;
    }
    int right = 1e18, left = -1e18; 
    for (int i = x; i < n; i++){
        if(s[i] == '#'){
            right = i;
            break;
        }
    }
    for (int i = x - 2; i >= 0; i--){
        if(s[i] == '#'){
            left = i;
            break;
        }
    }
    if(right == 1e18 && left == -1e18){
        cout << "1\n";
        return;
    } 
    int minRight = min (x, n - right + 1);
    int minLeft = min (n - x + 1, left + 2);
    cout << max (minRight, minLeft) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}