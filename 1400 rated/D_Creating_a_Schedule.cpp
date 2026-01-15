// Problem Link https://codeforces.com/contest/2111/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    vector<vector<int>> b(n, vector<int> (6));
    for (int i = 0; i < n - 1; i += 2){
        for (int j = 0; j < 6; j++){
            if(j % 2 == 0){
                b[i][j] = a[i / 2];
                b[i + 1][j] = a[m - i / 2 - 1];
            }
            else{
                b[i][j] = a[m - i / 2 - 1];
                b[i + 1][j] = a[i / 2];
            }
        }
    }
    if(n % 2){
        for (int j = 0; j < 6; j++){
            if(j % 2 == 0)    b[n - 1][j] = a[(n - 1) / 2];
            else    b[n - 1][j] = a[m - (n - 1)/ 2 - 1];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 6; j++){
            cout << b[i][j] << " \n"[j == 5];
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}