// Problem Link https://codeforces.com/contest/2171/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    if(a[0] == -1)  a[0] = a[n - 1];
    if(a[n - 1] == -1)  a[n - 1] = a[0];
    for (int i = 0; i < n; i++){
        if(a[i] == -1)  a[i] = 0;
    }
    cout << abs(a[0] - a[n - 1]) << "\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}