// Problem Link https://codeforces.com/contest/1974/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> freq;
    for (int i = 0; i < n; i++){
        freq[s[i]]++;
    }
    unordered_map<char, int> a, b, c;
    for (auto &[v, f] : freq){
        if(f > 1){
            a[v] = f / 2;
            b[v] = f / 2;
        }
        c[v] = f % 2;
    }
    if((c['N'] == c['S']) && (c['W'] == c['E'])){
        if(a.size() == 0 && c['N'] && c['W']){
            for (int i = 0; i < n; i++){
                if(s[i] == 'N' || s[i] == 'S')    cout << "R";
                else    cout << "H";
            }
            cout << "\n";
        }
        else if(a.size()){
            for (int i = 0; i < n; i++){
                if (a[s[i]]){
                    cout << "R";
                    a[s[i]]--;
                }
                else if (b[s[i]]){
                    cout << "H";
                    b[s[i]]--;
                }
                else    cout << "R";
            }
            cout << "\n";
        }
        else    cout << "NO\n";
    }
    else    cout << "NO\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}