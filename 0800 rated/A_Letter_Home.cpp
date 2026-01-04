// Problem Link https://codeforces.com/contest/2121/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)     cin >> a[i];
    int x = max(0, s - a[0]);
    int y = max(0, a[n - 1] - s);
    if(x >= y)   cout << x + y * 2 << "\n";
    else    cout << x * 2 + y << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}