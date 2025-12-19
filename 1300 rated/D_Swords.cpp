// Problem Link https://codeforces.com/contest/1216/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int maxElement = *max_element(a.begin(), a.end());
    int need = 0, sum = 0;
    for (int i = 0; i < n; i++){
        need = gcd(need, maxElement - a[i]);
        sum += maxElement - a[i];
    }
    int people = sum / need;
    cout << people << " " << need << "\n";
}

signed main(){
    solve();
}