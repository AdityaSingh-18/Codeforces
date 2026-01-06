// Problem Link https://codeforces.com/contest/2108/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int curr = 1, i = 0, count = 1;
    while(n--){
        if(count == 2){
            count = 0;
            i++;
        }
        curr += i;
        count++;
    }
    cout << curr << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}