// Problem Link https://codeforces.com/problemset/problem/2162/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    int x, max= 0 ;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x > max)  max = x;
    }
    cout << max << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}