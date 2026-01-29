// Problem Link https://codeforces.com/contest/2074/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    int a = 1, b = 2, c = 3;
    cout << "? " << a << " " << b << " " << c << endl;
    while(true){
        cin >> x;
        if(x != 0){
            int y = rand() % 3;
            if(y == 2)     a = x;
            else if(y == 1)     b = x;
            else      c = x;
            cout << "? " << a << " " << b << " " << c << endl;
        }
        else{
            cout << "! " << a << " " << b << " " << c << endl;
            return;
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}