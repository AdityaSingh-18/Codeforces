// Problem Link https://codeforces.com/contest/2116/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int Gelly = min (a, c);
    int Flower = min (b, d);
    if(Gelly >= Flower)  cout << "Gellyfish\n";
    else    cout << "Flower\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}