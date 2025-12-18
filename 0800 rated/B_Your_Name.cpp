// Problem Link https://codeforces.com/problemset/problem/2167/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> freqS(26), freqT(26);
    for (int i = 0; i < n; i++){
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if(freqS[i] != freqT[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}