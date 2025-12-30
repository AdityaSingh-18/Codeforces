// Problem Link https://codeforces.com/contest/2182/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> sumOdd(41), sumEven(41);

void solve(){
    int a, b;
    cin >> a >> b;
    int k = 0;
    for (int i = 1; i <= 40; i++){
        if((a >= sumOdd[i] && b >= sumEven[i]) || (a >= sumEven[i] && b >= sumOdd[i])){
            k = i;
        }
        else    break;
    }
    cout << k << "\n";
}

signed main(){
    for (int i = 1; i <= 40; i++) {
        sumOdd[i] = sumOdd[i - 1];
        sumEven[i] = sumEven[i - 1];
        int layerSize = 1LL << (i - 1);
        if (i % 2)      sumOdd[i] += layerSize;
        else       sumEven[i] += layerSize;
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}