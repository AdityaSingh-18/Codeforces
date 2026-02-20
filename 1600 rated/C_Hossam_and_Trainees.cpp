// Problem Link https://codeforces.com/contest/1771/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = sqrt(1e9);
vector<int> isprime(N + 1, 1), primes;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        for (auto p : primes) {
            if (p * p > x) {
                break;
            }
            if (x % p == 0) {
                if (s.contains(p)) {
                    cout << "YES\n";
                    return;
                }
                s.insert(p);
                while (x % p == 0) {
                    x /= p;
                }
            }
        }
        if (x > 1) {
            if (s.contains(x)) {
                cout << "YES\n";
                return;
            }
            s.insert(x);
        }
    }
    cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 2; i <= N; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
        for (auto p : primes) {
            if (i * p > N) {
                break;
            }
            isprime[i * p] = 0;
            if (i % p == 0) {
                break;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
