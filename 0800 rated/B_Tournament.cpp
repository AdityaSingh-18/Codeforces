// Problem Link https://codeforces.com/contest/2123/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int x = a[j - 1];
    sort(a.begin(), a.end());
    if(k == 1){
        if(a[n - 1] == x)   cout << "YES\n";
        else    cout << "NO\n";
    }
    else    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

If the value of k is 1 then the strength of j'th players should be highest one otherwise
he will be eliminated no matter what.
If k is greater than 1 then j'th player can remain in the last k players if above players keep
completing and eliminating each other until there are only k players remaining.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/