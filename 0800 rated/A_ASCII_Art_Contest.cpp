// Problem Link https://codeforces.com/problemset/problem/2172/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    if((a[2] - a[0]) >= 10)    cout << "check again";
    else    cout << "final " << a[1] << "\n";
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}