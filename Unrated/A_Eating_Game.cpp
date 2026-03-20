// Problem Link https://codeforces.com/contest/2200/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    unordered_map<int, int> freq;
    int  maxElement = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        maxElement = max(maxElement, x);
        freq[x]++;
    }
    cout << freq[maxElement] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}