// Problem Link https://codeforces.com/contest/2181/problem/F

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int x, countOne = 0, hasHigher = 0;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if(x == 1)  countOne++;
        if(x > 1)   hasHigher = true;
    }
    if(countOne % 2 == 0){
        if(hasHigher)   cout << "Alice\n";
        else    cout << "Bob\n";
    }
    else{
        if(hasHigher)     cout << "Bob\n";
        else    cout << "Alice\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}