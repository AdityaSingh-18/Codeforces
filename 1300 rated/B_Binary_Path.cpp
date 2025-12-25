// Problem Link https://codeforces.com/contest/1937/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int j = n - 1, k = -1;
    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] == '1' && b[i] == '0'){
            j = i;
            break;
        }
        if(a[i + 1] != b[i])    k = i;
    }
    for (int i = 0; i <= j; i++){
        cout << a[i];
    }
    for (int i = j; i < n; i++){
        cout << b[i];
    }
    cout << "\n";
    cout << j - k << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}