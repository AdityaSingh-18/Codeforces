// Problem Link https://codeforces.com/contest/1692/problem/G

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), b;
    b.push_back(0);
    int count = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n; i++){
        if(a[i] >= (a[i + 1] * 2)){
            b.push_back(i);
        }
    }
    b.push_back(n);
    for (int i = 0; i < (int)b.size() - 1; i++){
        if((b[i + 1] - b[i]) >= k){
            count += (b[i + 1] - b[i]) - k;
        }
    }
    cout << count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}