// Problem Link https://codeforces.com/contest/1948/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int maxTandem = 0;
    for (int i = 1; i <= n / 2; i++){
        for (int j = n - i - 1; j >= 0; j--){
            int k = 0;
            while(k < i && (s[i + j] == s[j] || s[i + j] == '?' || s[j] == '?')){
                k++;
                j--;
            }
            if(i == k){
                maxTandem = max(maxTandem, k * 2);
                break;
            }
        }
    }
    cout << maxTandem << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}