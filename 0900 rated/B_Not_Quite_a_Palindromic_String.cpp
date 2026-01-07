// Problem Link https://codeforces.com/contest/2114/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int zero = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '0')    zero++;
    }
    int one = n - zero;
    int maxPalin = zero / 2 + one / 2;
    int minPalin = max(zero, one) - n / 2;
    if(k >=minPalin && k <= maxPalin && (k - minPalin) % 2 == 0)    cout << "YES\n";
    else    cout << "NO\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}