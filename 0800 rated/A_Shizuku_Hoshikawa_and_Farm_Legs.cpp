// Problem Link https://codeforces.com/problemset/problem/2171/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    if(n % 2){
        cout << "0\n";
        return;
    }
    cout << n / 4 + 1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}