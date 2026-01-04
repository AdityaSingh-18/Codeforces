// Problem Link https://codeforces.com/contest/2112/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a, x, y;
    cin >> a >> x >> y;
    if(a < x == a < y)  cout << "YES\n";
    else    cout << "NO\n";  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

If a < x < y or a < y < x then Bob can start at x and y and win because he will always be closer 
to both points.
If a > x > y or a > y > x then alse Bob can start at x and y and win.
But if x > a > y or x < a < y then Bob cannot be closer to both points because Alice will be closer
to atleast one of the points and if a is in the mid then Bob cannot start at a because it has to be
distinct.
Time Complexity: O(1)
Space Complexity: O(1)

*/