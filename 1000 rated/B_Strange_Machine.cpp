// Problem Link https://codeforces.com/contest/2156/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int B = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == 'B') B++;
    }
    while(q--){
        int k;
        cin >> k;
        if(B == 0){
            cout << k << "\n";
        }
        else{
            int count = 0;
            while(k){
                for (int i = 0; i < n; i++){
                    if(k == 0)   break;
                    if(s[i] == 'A')    k--;
                    else    k /= 2;
                    count++;
                }
            }
            cout << count << "\n";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}