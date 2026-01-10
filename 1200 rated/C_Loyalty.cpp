// Problem Link https://codeforces.com/contest/2161/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, X;
    cin >> n >> X;
    vector<ll> a(n), b;
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    ll sum = 0, count = 0;
    int last = n - 1;
    for (int i = 0; i <= last; ){
        if(((sum + a[last]) / X) > (sum / X)){
            count += a[last];
            sum += a[last];
            b.push_back(a[last]);
            last--;
        }
        else{
            if(((sum + a[i]) / X) > (sum / X))    count += a[i];
            sum += a[i];
            b.push_back(a[i]);
            i++;
        }
    }
    cout << count << "\n";
    for (int i = 0; i < n; i++){
        cout << b[i] << " \n"[i == n - 1];
    }    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}