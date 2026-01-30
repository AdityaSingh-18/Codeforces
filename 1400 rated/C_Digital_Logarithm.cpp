// Problem Link https://codeforces.com/contest/1728/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    multiset<int> a, b;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < n; i++){
        cin >> x;
        b.insert(x);
    }
    int count = 0;
    while(!a.empty()){
        int x = *a.rbegin();
        int y = *b.rbegin();
        if(x > y){
            x = to_string(x).length();
            a.erase(--a.end());
            a.insert(x);
            count++;
        }
        else if (x < y){
            y = to_string(y).length();
            b.erase(--b.end());
            b.insert(y);
            count++;
        }
        else{
            a.erase(--a.end());
            b.erase(--b.end());
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