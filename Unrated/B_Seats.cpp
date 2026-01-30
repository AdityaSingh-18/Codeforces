// Problem Link https://codeforces.com/contest/2188/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = '0' + s + '0';
    vector<int> a;
    int count = 0, zero = 0;
    for (int i = 0; i < n + 2; i++){
        if(s[i] == '1'){
            count++;
            a.push_back(zero);
            zero = 0;
        }
        else     zero++;
    }
    a.push_back(zero);
    for (auto &i : a){
        count += i / 3;
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