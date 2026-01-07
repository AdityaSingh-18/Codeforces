// Problem Link https://codeforces.com/contest/2110/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '(')     count++;
        else    count--;
        if(!count && i < n - 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}