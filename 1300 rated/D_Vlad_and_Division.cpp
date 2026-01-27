// Problem Link https://codeforces.com/contest/1926/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    multiset<int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    int count = 0;
    while(!a.empty()){
        int val = *(a.begin());
        a.erase(a.begin());
        int comp = (val ^ ((1LL << 31) - 1));
        auto it = a.find(comp);
        if(it != a.end()){
            count++;
            a.erase(it);
        }
    }
    cout << n - count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}