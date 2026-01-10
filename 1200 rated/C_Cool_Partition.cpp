// Problem Link https://codeforces.com/contest/2117/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)    cin >> i;
    set<int> b, c;
    int count = 0;
    for (int i = 0; i < n; i++){
        b.insert(a[i]);
        c.insert(a[i]);
        if(b.size() == c.size()){
            c.clear();
            count++;
        }
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}