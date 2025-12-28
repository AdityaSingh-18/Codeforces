// Problem Link https://codeforces.com/contest/2178/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int count = (s[0] == 'u') + (s[n - 1] == 'u');
    s[0] = s[n - 1] = 's';
    for (int i = 1; i < n - 1; i++){
        if(s[i] == 'u' && s[i - 1] == 'u'){
            count++;
            s[i] = 's';
        }
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}