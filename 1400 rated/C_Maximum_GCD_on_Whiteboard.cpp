// Problem Link https://codeforces.com/contest/2156/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), freq(n + 1), pref(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + freq[i];
    }
    int gcd = 1;
    for (int i = 0; i <= n; i++){
        int x = min (n, 4 * i - 1);
        int gcdCount = n - pref[x];
        if(i <= n)  gcdCount += freq[i];
        if(2 * i <= n)  gcdCount += freq[2 * i];
        if(3 * i <= n)  gcdCount += freq[3 * i];
        if(gcdCount >= (n - k))  gcd = i;
    }
    cout << gcd << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}