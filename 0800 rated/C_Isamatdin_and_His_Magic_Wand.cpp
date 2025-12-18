// Problem Link https://codeforces.com/problemset/problem/2167/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int even = false, odd = false;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2)  even = true;
        else    odd = true;
    }
    if(even && odd){
        sort(a.begin(), a.end());
    }
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