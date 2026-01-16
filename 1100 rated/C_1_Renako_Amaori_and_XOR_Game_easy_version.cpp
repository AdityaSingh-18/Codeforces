// Problem Link https://codeforces.com/contest/2171/problem/C1

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    int x = 0;
    vector<int> a(n), b(n);
    for (auto &i : a){
        cin >> i;
        x ^= i;
    }
    for (auto &i : b){
        cin >> i;
        x ^= i;
    }
    if(!x){
        cout << "Tie\n";
        return;
    }
    int index;
    for (int i = 0; i < n; i++){
        if(a[i] ^ b[i]){
            index = i;
        }
    }
    cout << (index % 2 == 0 ? "Ajisai" : "Mai") << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}