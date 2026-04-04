// Problem Link https://codeforces.com/contest/2218/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int bits = 60;
const int N = 6e5 + 5;
int t[N][2], c;

void insert(int x){
    int curr = 0;
    for (int i = bits; i >= 0; i--){
        int bit = (x >> i) & 1;
        if (!t[curr][bit]){
            t[c][0] = t[c][1] = 0;
            t[curr][bit] = c++;
        }
        curr = t[curr][bit];
    }
}

int maxXor(int x){
    int curr = 0, res = 0;
    for (int i = bits; i >= 0; i--){
        int bit = (x >> i) & 1, need = 1 - bit;
        if (t[curr][need]){ 
            res |= (1LL << i); 
            curr = t[curr][need]; 
        }
        else    curr = t[curr][bit];
    }
    return res;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)     cin >> i;
    c = 1;
    t[0][0] = t[0][1] = 0;
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (i > 0)     ans = max(ans, maxXor(a[i]));
        insert(a[i]);
    }
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}