// Problem Link https://codeforces.com/contest/1369/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string S = "";
    int i = 0, j = n - 1;
    while(i < n && s[i] == '0'){
        S += '0';
        i++;
    }
    while(j >= 0 && s[j] == '1'){
        S += '1';
        j--;
    }
    if(j > i)      S = '0' + S;
    cout << S << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}