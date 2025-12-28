// Problem Link https://codeforces.com/contest/2132/problem/A 

#include <bits/stdc++.h>
using namespace std;
#define int long long

string appendBoth(string a, string b, string c, int m){
    int i = 0;
    while (i < m){
        if (c[i] == 'D')   a = a + b[i];
        else  a = b[i] + a;
        i++;
    }
    return a;
}

void solve(){
    int n,m;
    cin >> n;
    string a, b, c;
    cin >> a >> m >> b >> c;
    cout << appendBoth(a, b, c, m) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}