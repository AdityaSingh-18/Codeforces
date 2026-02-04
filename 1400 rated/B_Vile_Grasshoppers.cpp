// Problem Link https://codeforces.com/contest/937/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

bool checkPrime(int x, int y, int p){
    for (int i = 2; i <= p && i * i <= y; i++){
        if(x % i == 0)  return false;
    }
    return true;
}

void solve(){
    int p, y;
    cin >> p >> y;
    for (int i = y; i > p; i--){
        if(checkPrime(i, y, p)){
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
}

signed main(){
    solve();
}