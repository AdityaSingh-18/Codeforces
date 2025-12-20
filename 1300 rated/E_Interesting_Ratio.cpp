// Problem Link https://codeforces.com/contest/2091/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7;
vector<int> prime(N + 1, 1);

void solve() {
    int n, ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (prime[i])    ans += n / i;
    }
    cout << ans << "\n";
}

signed main() {
    prime[0] = prime[1] = 0;
	for (int i = 2; i * i <= N; i++) {
	    if (!prime[i])     continue;
	    for (int j = i * i; j <= N; j += i){ 
            prime[j] = 0;
        }
	}
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}