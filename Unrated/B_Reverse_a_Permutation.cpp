// Problem Link https://codeforces.com/contest/2193/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int j = 0;
    while(j < n && a[j] == (n - j)){
        cout << a[j] << " ";
        j++;
    }
    int k = n - 1;
    for (int i = j; i < n; i++){
        if(a[i] == (n - j)){
            k = i;
            break;
        }
    }
    for (int i = k; i >= j; i--){
        cout << a[i] << " "; 
    }
    for (int i = (k + 1); i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}