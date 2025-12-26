// Problem Link https://codeforces.com/contest/1017/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '1')     count1++;
        if(s[i] == '0' && t[i] == '0')     count2++;
        if(s[i] == '0' && t[i] == '1')     count3++;
        if(s[i] == '1' && t[i] == '0')     count4++;
    }
    cout << count1 * count2 + count3 * count4 << "\n";
}

signed main(){
    solve();
}