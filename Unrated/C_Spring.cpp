// Problem Link https://codeforces.com/contest/2204/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int abLcm = lcm(a, b);
    int bcLcm = lcm(b, c);
    int acLcm = lcm(a, c);
    int abcLcm = lcm(abLcm, c);

    int A = n / a, B = n / b, C = n / c;
    int AB = n / abLcm, AC = n / acLcm, BC = n / bcLcm, ABC = n / abcLcm;

    int Alice = 6*(A - AB - AC + ABC) + 3*(AB - ABC) + 3*(AC - ABC) + 2*ABC;
    int Bob = 6*(B - AB - BC + ABC) + 3*(AB - ABC) + 3*(BC - ABC) + 2*ABC;
    int Carol = 6*(C - AC - BC + ABC) + 3*(AC - ABC) + 3*(BC - ABC) + 2*ABC;

    cout << Alice << " " << Bob << " " << Carol << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}