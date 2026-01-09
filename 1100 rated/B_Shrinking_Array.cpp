// Problem Link https://codeforces.com/contest/2112/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    for (int i = 0; i < n - 1; i++){
        if(abs(a[i] - a[i + 1]) <= 1){
            cout << 0 << endl;
            return;
        }
    }
    bool increase = a[0] < a[1];
    bool decrease = a[0] > a[1];
    for (int i = 1; i < n - 1; i++){
        if(increase && a[i] > a[i + 1]){
            cout << 1 << endl;
            return;
        }
        if(decrease && a[i] < a[i + 1]){
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first check if the array is already beautiful or not. We can transform any array into beautiful
in 1 step if the array is not strictly increasiing or decreasing with a gap of 2 or more.
Time Complexity: O(n)
Space Complexity: O(n)

*/