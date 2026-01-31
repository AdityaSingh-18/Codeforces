// Problem Link https://codeforces.com/contest/1950/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

bool checkRepeating(string s, string t, int n, int m){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(s[i] != t[i % m])    count++;
        if(count == 2)    return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++){
        if(n % i)   continue;
        string s1 = s.substr(0, i);
        string s2 = s.substr(i, i);
        if(checkRepeating(s, s1, n, i) || checkRepeating(s, s2, n, i)){
            cout << i << "\n";
            return;
        }
    }
    cout << n << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}