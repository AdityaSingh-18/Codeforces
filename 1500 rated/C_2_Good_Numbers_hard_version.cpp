// Problem Link https://codeforces.com/contest/1249/problem/C2

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a;
    int pos = -1, j = 0, x = n;
    while (x > 0) {
        a.push_back(x % 3);
        if (x % 3 == 2){
            pos = j;
        }
        j++;
        x /= 3;
    }
    if(pos == -1){
        cout << n << "\n";
        return;
    }
    for (int i = 0; i < pos; i++)    a[i] = 0;
    int m = a.size(), carry = 0;
    for (int i = pos; i < m; i++){
        a[i] += carry;
        carry = 0;
        if(a[i] >= 2){
            a[i] = 0;
            carry = 1;
        }
    }
    int ans = 0, power = 1;
    for (auto &i : a){
        ans += (power * i);
        power *= 3;
    }
    if(carry)   ans = power;
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}