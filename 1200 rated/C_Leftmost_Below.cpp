// Problem Link https://codeforces.com/contest/2128/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int minElement = a[0];
    for (int i = 1; i < n; i++){
        minElement = min(minElement, a[i]);
        if(a[i] >= (2 * minElement)){
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