// Problem Link https://codeforces.com/contest/2104/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n; i++){
        if(s[i] == 'A')     a.push_back(i + 1);
        else    b.push_back(i + 1);
    } 
    for (auto &alice : a){
        bool win = true;
        for (auto &bob : b){
            if(alice == 1 && bob == n)  continue;
            if(alice < bob || (alice == n && bob == 1)){
                win = false;
                break;
            }
        }
        if(win){
            cout << "Alice\n";
            return;
        }
    }
    cout << "Bob\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}