// Problem Link https://codeforces.com/contest/2218/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e9 + 5; 
vector<int> primes, isPrime(N, 1);

void solve(){
    int n;
    cin >> n;
    cout << primes[0];
    for (int i = 1; i <= n - 2; i++){
        cout << " " << primes[i - 1] * primes[i];
    }
    cout << " " << primes[n - 2] << "\n";
}

signed main(){
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i < N; i++){
        if (!isPrime[i])     continue;
        primes.push_back(i);
        for (int j = i * i; j < N; j += i){
            isPrime[j] = 0;
        }
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}