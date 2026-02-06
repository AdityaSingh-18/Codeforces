// Problem Link https://codeforces.com/contest/2126/problem/D

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; 
    ll k;
    cin >> n >> k;
    ll l, r, real;
    vector<vector<ll>> a;
    for(int i = 0; i < n; i++) {
        cin >> l >> r >> real; 
        a.push_back({l,r,real});
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
      if(k >= a[i][0] && k <= a[i][1])  k = max(k, a[i][2]);
    }
    cout << k << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We store all casinos in a 2D vector, where each inner vector holds {l, r, real}. Sorting the casinos by their 
minimum coin requirement l ensures we consider them in the proper order. Then, for each casino, if our current 
coins k are within [l, r], we update k to the maximum coins we can get (real). Finally, we print the highest 
coins achievable after visiting all possible casinos.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/