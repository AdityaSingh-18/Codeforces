// Problem Link https://codeforces.com/contest/2126/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin >> x;
    int y = 9;
    while (x){
        y = min (y, x % 10);
        x /= 10;
    }
    cout << y << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

The minimum integer y will always be a single didgit.We have to find the minimum
digit present in integer x.
Time Complexity: O(1)
Space Complexity: O(1)

*/