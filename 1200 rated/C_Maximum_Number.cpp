// Problem Link https://codeforces.com/problemset/problem/774/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n;
    cin >> n;
    if(n % 2){
        cout << 7;
        n -= 3;
    }
    n /= 2;
    while(n--){
        cout << 1;
    }
    cout << "\n";
}
 
signed main(){
    solve();
}