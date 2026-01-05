// Problem Link https://codeforces.com/contest/2154/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0, m = k;
    for (int i = 0; i < n; i++){
        if(s[i] == '0')    m++;
        else{
            if(m >= k)   count++;
            m = 1;
        }
    }
    cout << count << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}