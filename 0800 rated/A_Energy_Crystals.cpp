// Problem Link https://codeforces.com/contest/2111/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, count= 0;
    while(min({a, b, c}) < n){
        if(a <= b && a <= c)     a = min(b, c) * 2 + 1;
        else if(b <= a && b <= c)    b = min(a, c) * 2 + 1;
        else    c = min(a, b) * 2 + 1;
        count++;
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