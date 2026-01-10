// Problem Link https://codeforces.com/contest/2103/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char curr = '0';
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != curr){
            count++;
            curr = s[i];
        }
    }
    if(count >= 3)    count -= 2;
    else if(count == 2)  count--;
    cout << n + count << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}