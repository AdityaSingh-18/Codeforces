// Problem Link https://codeforces.com/contest/2106/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    vector<int> match1(m), match2(m);
    int j = n - 1;
    for(int i = m - 1; i >= 0; i--){
        while(j >= 0 && a[j] < b[i])    j--;
        match1[i] = j;
        j--;
    }
    j = 0;
    for(int i = 0; i < m; i++){
        while(j < n && a[j] < b[i])     j++;
        match2[i] = j;
        j++;
    }
    if(match2.back() < n){
        cout << 0 << endl;
        return;
    }
    int ans = 1e18;
    for(int i = 0; i < m; i++){
        int prev = i == 0 ? -1 : match2[i - 1];
        int next = i + 1 == m ? n : match1[i + 1];
        if(next > prev){
            ans = min(ans, b[i]);
        }
    }
    cout << (ans == 1e18 ? -1 : ans) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}