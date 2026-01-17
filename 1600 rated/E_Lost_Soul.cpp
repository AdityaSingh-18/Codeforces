// Problem Link https://codeforces.com/contest/2117/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    if(a[n - 1] == b[n - 1]){
        cout << n << "\n";
        return;
    }
    vector<int> c(n + 1);
    int count = 0;
    for (int i = n - 2; i >= 0; i--){
        if(a[i] == b[i] || a[i] == a[i + 1] || b[i] == b[i + 1] || c[a[i]] || c[b[i]]){
            count = i + 1;
            break;
        }
        c[a[i + 1]] = c[b[i + 1]] = 1;
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