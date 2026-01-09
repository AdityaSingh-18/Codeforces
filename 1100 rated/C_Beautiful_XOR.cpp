// Problem Link https://codeforces.com/contest/2162/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int msb(int x){
    int pos = 0;
    while (x > 1) {
        x >>= 1;
        pos++;
    }
    return pos;
}

void solve(){
    int a, b;
    cin >> a >> b;
    if(a == b){
        cout << "0\n";  
        return;
    }
    if((a ^ b) <= a){
        cout << "1\n";
        cout << (a ^ b) << "\n";
    }
    else if(msb(a) >= msb(b)){
        int c = (a | b);
        cout << "2\n";
        cout << (a ^ c) << " " << (c ^ b) << "\n";
    }
    else    cout << "-1\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}