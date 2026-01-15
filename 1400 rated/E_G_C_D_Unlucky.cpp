// Problem Link https://codeforces.com/contest/2126/problem/E

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)    cin >> a[i];
    for (int i = 0; i < n; i++)    cin >> b[i];
    if (a[n - 1] != b[0])
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n - 1; i++){
        if ( a[i] < a[i + 1] || a[i] % a[i + 1] != 0 || b[i] > b[i + 1] || b[i + 1] % b[i] != 0){
            cout << "NO\n";
            return;
        }
    }
    for (int i = 0; i < n; i++){
        if (gcd(a[i], b[i]) != b[0]) {
            cout << "NO\n"; 
            return;
        }
    }
    for (int i = 0; i < n - 1; i++){
        int x = a[i] / a[i + 1];
        int y = b[i + 1] / b[i];
        if (gcd(x, y) != 1) {
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

We need to check five things in both the array:
The GCD of both the array(global GCD) should be same thats why i checked a[n-1] to b[0].
The GCD cannont increase for the array as we move ahead.
The GCD should be a divisible for previous GCD.
The GCD of the pairs of both array should be equal to global GCD(GCD(ai,bi) == global GCD)
The factor removed and introduced in both the arrays should be coprimes(GCD = 1)
Time Compplexity: O(n)
Space Complexity: O(n)

*/