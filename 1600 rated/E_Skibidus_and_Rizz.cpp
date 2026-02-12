// Problem Link https://codeforces.com/contest/2065/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int len = n + m;
    if(abs(n - m) > k || k > max(n, m))  cout << "-1\n";
    else{
        if(n >= m){
            for (int i = 0; i < k; i++){
                cout << "0";
                n--;
            }
            while (n > 0 && m > 0){
                cout << "10";
                m--;
                n--;
            }
            while(m > 0){
                cout << "1";
                m--;
            }
        }
        else{
            for (int i = 0; i < k; i++){
                cout << "1";
                m--;
            }
            while (n > 0 && m > 0){
                cout << "01";
                n--;
                m--;
            }
            while(n > 0){
                cout << "0";
                n--;
            }
        }
        cout << "\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}