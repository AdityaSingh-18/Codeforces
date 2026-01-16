// Problem Link https://codeforces.com/contest/2109/problem/C1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    cout << "digit" << endl;
    int x;
    cin >> x;
    cout << "digit" << endl;
    cin >> x;
    for (int i = 8; i >= 1; i /= 2) {
        cout << "add " << -i << endl;
        cin >> x;
    }
    cout << "add " << n - 1 << endl;
    cin >> x;
    cout << "!" << endl;
    cin >> x;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}