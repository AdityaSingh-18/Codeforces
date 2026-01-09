// Problem Link https://codeforces.com/contest/2114/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int count = 1, i = 0, j = 1;
    while(j < n){
        if((a[i] + 1) < a[j]){
            i = j;
            count++;
        }
        j++;
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