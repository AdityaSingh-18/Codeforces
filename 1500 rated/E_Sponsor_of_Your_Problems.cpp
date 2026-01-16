// Problem Link https://codeforces.com/contest/2121/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string l, r;
    cin >> l >> r;
    if(l == r){
        cout << 2 * l.size() << "\n";
        return;
    }
    int d = 0;
    while(d < l.size() && l[d] == r[d])     d++;
    if(l[d] < r[d] - 1)   cout << 2 * d << "\n";
    else{
        int x = 2 * d + 1;
        for (int i = d + 1; i < l.size(); i++){
            if(l[i] == '9' && r[i] == '0')  x++;
            else    break;
        } 
        cout << x << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}