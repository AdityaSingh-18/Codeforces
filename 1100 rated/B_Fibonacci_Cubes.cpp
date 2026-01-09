// Problem Link https://codeforces.com/contest/2111/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int fibonacci(int n){
    if(n == 1)  return 1;
    if(n == 2)  return 2;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void solve(){
    int n, m;
    cin >> n >> m;
    int fib1 = fibonacci(n);
    int fib2 = fibonacci(n + 1);
    vector<vector<int>> a(m, vector<int> (3));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        int x = 0, y = 0;
        for (int j = 0; j < 3; j++){
            if(a[i][j] >= fib1)     x++;
            if(a[i][j] >= fib2)   y = 1;
        }
        if(x >= 3 && y)    cout << '1';
        else    cout << '0';
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}