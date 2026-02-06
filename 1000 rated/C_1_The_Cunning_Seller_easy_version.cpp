#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll sum = 0;
    while (n){
        ll x = logl(n) / logl(3);
        ll d = pow(3, x);
        sum += pow(3, x + 1) + x * pow(3, x - 1);
        n -= d;
    }
    cout << sum << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*
We calculate the max power for n possible and calculate coins using formula 3^x-1*(9+x)
and also calculate the watermeleons to be subtracted from total(n). 
*/
