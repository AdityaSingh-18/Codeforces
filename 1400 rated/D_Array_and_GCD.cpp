// Problem Link https://codeforces.com/contest/2104/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> prime, visitedPrime(6e6);
const int N = 6e6;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    sort(a.rbegin(), a.rend());
    int ans = 0, sumArray = 0, sumPrime = 0;
    for (int i = 0; i < n; i++){
        sumArray += a[i];
        sumPrime += prime[i];
        if(sumArray >= sumPrime)    ans = i + 1;
    }
    cout << n - ans << "\n";
}

signed main(){
    for (int i = 2; i < N; i++){
        if(visitedPrime[i])    continue;
        prime.push_back(i);
        for (int j = i; j < N; j += i){
            visitedPrime[j] = 1;
        }
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}