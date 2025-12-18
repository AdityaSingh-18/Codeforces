// Problem Link https://codeforces.com/problemset/problem/2164/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)     cin >> a[i];
    cin >> k;
    sort(a.begin(), a.end());
    if(a[0] > k || a[n - 1] < k)    cout << "NO\n";
    else    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}