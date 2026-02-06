// Problem Link https://codeforces.com/contest/2102/problem/C

#include <bits/stdc++.h>
using namespace std;
#define into long long

void solve() {
    int n; 
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, -1));
    int x, y;
    if (n % 2 == 0)    x = n / 2 - 1, y = n / 2 - 1;
    else    x = n / 2, y = n / 2;
    a[x][y] = 0;
    int value = 1, step = 1;
    vector<pair<int,int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    while (value < n * n) {
        for (int i = 0; i < 4; i++) {
            int dx = dir[i].first, dy = dir[i].second;
            for (int j = 0; j < step; j++) {
                x += dx, y += dy;
                if (x >= 0 && x < n && y >= 0 && y < n && a[x][y] == -1) {
                    a[x][y] = value;
                    value++;
                }
                if (value >= n * n)  break;
            }
            if (value >= n * n)  break;
            step += i % 2;
        }
    }
    for (auto &i : a) {
        for (int j = 0; j < n; j++) {
            cout << i[j] << " \n"[j == n - 1];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
