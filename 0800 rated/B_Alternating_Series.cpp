// Problem Link https://codeforces.com/contest/2131/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n % 2){
        for (int i = 0; i < n / 2; i++){
            cout << -1 << " " << 3 <<" ";
        }
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < (n - 2) / 2; i++){
        cout << -1 << " " << 3 << " ";
    }
    cout << -1 << " " << 2 << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

We need -1 to make the product of adjacent element negative as -1 is the least negative number
and its absolute value is also the least.
If  n is odd then the series will start and end with -1 only.And we need 3 because there will be two -1's 
in the adjacent of 3.
If the n is even we the series will start with -1 and will have -1 and 3 at alternate position
but end with a positive number so we can use 2 at last because it will have only one -1 adjacent to it.
Time Complexity: O(n)
Space Complexity: O(1)

*/