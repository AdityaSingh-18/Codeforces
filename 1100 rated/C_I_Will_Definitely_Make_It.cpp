// Problem Link https://codeforces.com/contest/2126/problem/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int current = a[k - 1];
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        if ( a[i] >= current && a[i + 1] - current > a[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

The height at which we initially are at start is the max time we have to teleport to othertower.
So if the difference between two towers of height greater than initial tower height at any point 
is greater than initial tower height then we cant teleport to next tower.So we first sort the
array and then iterate the array to find the difference between heights of tower greater than or
equal to current.And print NO if the difference is greater than current height, and YES if all height
difference is less than current height.
Time Complexity: O(nlogn)
Space Compleity: O(n)

*/