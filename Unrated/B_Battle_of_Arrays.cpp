// Problem Link https://codeforces.com/contest/2181/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    multiset<int> a, b;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++){
        cin >> x;
        b.insert(x);
    }
    int aliceTurn = 1;
    while(true){
        int maxAlice = *a.rbegin();
        int maxBob = *b.rbegin();
        if(aliceTurn){
            b.erase(--(b.end()));
            if(maxAlice < maxBob){
                b.insert(maxBob - maxAlice);
            }
            if(b.empty()){
                cout << "Alice\n";
                return;
            }
        }
        else{
            a.erase(--(a.end()));
            if(maxAlice > maxBob){
                a.insert(maxAlice - maxBob);
            }
            if(a.empty()){
                cout << "Bob\n";
                return;
            }
        }
        aliceTurn = !aliceTurn;
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}