// Problem Link https://codeforces.com/contest/2120/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, s;
    cin >> n >> s;
    int d1, d2, x, y;
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> d1 >> d2 >> x >> y;
        if((x == y && d1 == d2) || (x + y) == s)  count++; 
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}