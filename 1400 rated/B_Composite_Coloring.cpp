// Problem Link https://codeforces.com/contest/1332/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), visited(n), b(n);
    for (auto &i : a)   cin >> i;
    int k = 0;
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (int i = 0; i < 11; i++){
        int used = 0;
        for(int j = 0; j < n; j++){
            if(visited[j])   continue;
            if(gcd(p[i], a[j]) > 1){
                used = 1;
                visited[j]++;
                b[j] = k + 1;
            }
        }
        if(used)    k++;
    }
    cout << k << "\n";
    for (int i = 0; i < n; i++){
        cout << b[i] << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}