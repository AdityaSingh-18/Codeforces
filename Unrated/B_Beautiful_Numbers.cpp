// Problem Link https://codeforces.com/contest/2203/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += s[i] - '0';
    }
    if(sum <= 9){
        cout << "0\n";
        return;
    }
    s[0] -= 1;
    sort(s.rbegin(), s.rend());
    int count = 0;
    for (int i = 0; i < n; i++){
        sum -= s[i] - '0';
        count++;
        if(sum <= 9){
            cout << count << "\n";
            return;
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}