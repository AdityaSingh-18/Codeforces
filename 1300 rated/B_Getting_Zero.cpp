// Problem Link https://codeforces.com/contest/1661/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 32768;

void solve(){
    int t;
    cin >> t;
    int n; 
    for (int i = 0; i < t; i++){
        cin >> n;
        int minAns = 15;
        for(int i = 0; i < 15; i++){
            int x = ((n + i) % MOD); 
            int count = 0;
            while(x != 0){
                x = x * 2 % MOD;
                count++;
            }
            minAns = min (minAns, count + i);
        }
        cout << minAns << " \n"[i == t - 1];
    }
}

signed main(){
    solve();
}