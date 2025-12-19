// Problem Link https://codeforces.com/contest/2050/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int flag = 1;
    while(flag){
        flag = 0;
        for(int i = 1; i < n; i++){
            if(s[i] == '0')     continue;
            if((s[i - 1] - '0') < (s[i] - '0' - 1)){
                s[i]--;
                swap(s[i], s[i - 1]);
                flag = 1;
            }
        }
    }
    cout << s << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}