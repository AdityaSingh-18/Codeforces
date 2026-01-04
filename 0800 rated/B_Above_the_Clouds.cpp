// Problem Link https://codeforces.com/contest/2121/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26);
    for (int i = 0; i < n; i++){
        freq[s[i] - 'a']++;
        if(freq[s[i] - 'a'] == 3){
            cout << "Yes\n";
            return;
        }
        if(freq[s[i] - 'a'] == 2 && (s[0] != s[n - 1] || s[i] != s[0])){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}