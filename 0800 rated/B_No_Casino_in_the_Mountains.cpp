// Problem Link https://codeforces.com/contest/2126/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int x, count = 0, peak = 0, Break = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 0 && !Break) {
            count++;
        }
        else{
            count = 0;
            Break = 0;
        }
        if (count == k){
            Break = 1;
            peak++;
        }   
    }
    cout << peak << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We find the number of k consecutive 0's in the array. Also we skip the next array when we hit count = k.
Time Complexity: O(n)
Space Complexity: O(1)

*/