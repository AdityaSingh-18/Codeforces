// Problem Link https://codeforces.com/contest/2109/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int one = 0;
    for (auto &i : a){
        cin >> i;
        if(i == 1)  one++;
    }
    if(one == n){
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n - 1; i++){
        if(a[i] == 0 && a[i + 1] == 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}