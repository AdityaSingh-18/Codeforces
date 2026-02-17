// Problem Link https://codeforces.com/contest/2136/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        if(s[i] == '1'){
            count++;
            if(count >= k){
                cout << "NO\n";
                return;
            }
        }
        else    count = 0;
    }
    int l = 1, r = n;
    for (int i = 0; i < n; i++){
        if(s[i] == '1'){
            a[i] = l;
            l++;
        }
        else{
            a[i] = r;
            r--;            
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}