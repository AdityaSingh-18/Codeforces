// Problem Link https://codeforces.com/problemset/problem/2163/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto & i : a)  cin >> i;
    sort(a.begin(), a.end());
    for (int i = 2; i < n; i += 2){
        if(a[i] != a[i - 1]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}