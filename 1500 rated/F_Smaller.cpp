// Problem Link https://codeforces.com/contest/1742/problem/F

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int q;
    cin >> q;
    int n = 1, m = 1, hasA = 0, hasB= 0;
    while(q--){
        int d, k;
        string x;
        cin >> d >> k >> x;
        int p = x.size(), count = 0, i = 0;
        while(i < p){
            if(x[i] == 'a'){
                count++;
            }
            i++;
        }
        if(d == 1){
            if((p - count) != 0)    hasA = 1;
            n += k * count;
        }
        else{
            if((p - count) != 0)   hasB = 1;
            m += k * count;
        }
        if(hasB || !hasA && n < m)        cout << "YES\n";
        else      cout << "NO\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}