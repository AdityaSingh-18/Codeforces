// Problem Link https://codeforces.com/contest/1198/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n, -1);
    for (auto &i : a)   cin >> i;
    int q, j = 0;
    cin >> q;
    vector<int> maxTwo(q + 1);
    while(j < q){
        int g, p, x;
        cin >> g;
        if(g == 1){
            cin >> p >> x;
            a[p - 1] = x;
            b[p - 1] = j;
        }
        else{
            cin >> x;
            maxTwo[j] = x;
        }
        j++;
    }
    for (int i = q - 2; i >= 0; i--){
        maxTwo[i] = max(maxTwo[i], maxTwo[i + 1]);
    }
    for (int i = 0; i < n; i++){
        cout << max(a[i], maxTwo[b[i] + 1]) << " \n"[i == n - 1];
    }
}

signed main(){
    solve();
}