// Problem Link https://codeforces.com/contest/2144/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1), sum(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        sum[i] = (a[i] + sum[i - 1]) %3;
    }
    for (int l = 1; l < n; l++) {
        for (int r = l + 1; r < n; r++) {
            int s1 = sum[l] % 3;
            int s2 = (sum[r] - sum[l] + 3) % 3;
            int s3 = (sum[n] - sum[r] + 3) % 3;
            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                cout << l << " " << r << "\n";
                return;
            }
        }
    }
    cout << "0 0\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}