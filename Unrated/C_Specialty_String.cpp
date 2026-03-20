// Problem Link https://codeforces.com/contest/2200/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < n; i++){
        if(!st.empty() && s[i] == st.top())    st.pop();
        else    st.push(s[i]);
    }
    cout << (st.empty() ? "YES\n" : "NO\n");
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}