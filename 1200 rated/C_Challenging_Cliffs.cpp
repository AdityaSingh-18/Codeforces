// Problem Link https://codeforces.com/contest/1537/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    int minDiff = 1e18, j = -1;
    for (int i = 0; i < n - 1; i++){
        if(minDiff > (a[i + 1] - a[i])){
            minDiff = a[i + 1] - a[i];
            j = i;
        }
        else if (minDiff == (a[i + 1] - a[i])){
            if(abs(n / 2 - i) < abs(n / 2 - j)){
                j = i;
            }
        }
    }
    cout << a[j] << " ";
    for (int i = j + 2; i < n; i++){
        cout << a[i] << " ";
    }
    for (int i = 0; i < j; i++){
        cout << a[i] << " ";
    }
    cout << a[j + 1] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}