// Problem Link https://codeforces.com/contest/2171/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), pref(n + 1, n), suff(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        pref[i + 1] = min (pref[i], a[i]);
    }
    for (int i = n - 1; i >= 0; i--){
        suff[i] = max (suff[i + 1] , a[i]);
    }
    for (int i = 1; i < n; i++){
        if(pref[i] > suff[i]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}