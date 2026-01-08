// Problem Link https://codeforces.com/contest/2154/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxElement = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        maxElement = max (maxElement, a[i]);
        if(i % 2){
            a[i] = maxElement;
        }
    }
    int count = max (0, a[0] - a[1] + 1);
    for (int i = 2; i < n; i += 2){
        count += (max(0, a[i] - a[i - 1] + 1));
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}