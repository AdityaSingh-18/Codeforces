// Problem Link https://codeforces.com/problemset/problem/2025/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, x;
    cin >> n >> k;
    map<int, int> freq;
    for (int i = 0; i < n; i++){
        cin >> x;
        freq[x]++;
    }
    int maxCount = 0, prev = -1, cardCount = 0, j = 0;
    for (auto &[i, f] : freq){
        if(i != (prev + 1)){
            cardCount = 0;
            j = 0;
        }
        cardCount += f;
        j++;
        if(j > k){
            cardCount -= freq[i - k];
        }
        maxCount = max (maxCount, cardCount);
        prev = i;
    }
    cout << maxCount << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}