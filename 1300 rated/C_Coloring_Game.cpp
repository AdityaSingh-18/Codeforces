// Problem Link https://codeforces.com/contest/2112/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    ll count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            ll x = max (a[n - 1], 2 * a[i]) - a[i] - a[j];
            ll k = upper_bound(a.begin(), a.begin() + j, x) - a.begin();
            count += j - k;
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

After Alice chooses 3 integers in the array Bob have 2 option to win. He can choose either
the highest element in array if it is greater than the sum of elements Alice choose.
Or he can choose the maximum element in the numbers Alice choose if the maximum of that is
greater than the sum of element Alice choose - maximum element of those 3 elements.
Since the array is sorted we can iterate for y and z and use upperbound to find a valid x
if possible to make the above conditions false for Bob.
Time Complexity: O(n ^ 2 log n)
Space Complexity: O(n)

*/