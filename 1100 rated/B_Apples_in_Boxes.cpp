// Problem Link https://codeforces.com/contest/2107/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    int x, sum = 0, maxCount = 1, maxBox = 0, minBox = 1e18;
    for (int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        if(maxBox < x){
            maxBox = x;
            maxCount = 1;
        }
        else if(maxBox == x)    maxCount++;
        minBox = min (minBox, x);
    }
    int dif = maxBox - minBox;
    if(dif > k + 1 || (dif > k && maxCount > 1) || sum % 2 == 0){
        cout << "Jerry\n";
    }
    else cout << "Tom\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}