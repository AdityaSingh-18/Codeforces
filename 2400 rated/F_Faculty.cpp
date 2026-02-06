// Problem Link https://codeforces.com/contest/2110/problem/F

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int ans = 0, mx = a[0];
    for (int i = 0; i < n; i++){
        ans = max (ans, (a[i] % mx) + (mx % a[i]));
        if(a[i] > mx){
            if(a[i] >= mx * 2){
                mx = a[i];
                for (int j = 0; j < i; j++){
                    ans = max (ans, (a[i] % a[j]) + (a[j] % a[i]));
                }
            }
            else    ans = mx = a[i];
        }
        cout << ans << " ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}