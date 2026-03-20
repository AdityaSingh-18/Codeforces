// Problem Link https://codeforces.com/contest/1807/problem/F

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, x1, y1, x2, y2;
    string d;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2 >> d;
    if(x1 == x2 && y1 == y2){
        cout << "0\n";
        return;
    }
    int i = x1, j = y1;
    int count = 0, limit = 2 * n * m;
    while(limit--){
        int bounce = 0, x3 = i, y3 = j;
        if(d[0] == 'U')     x3--;
        else    x3++;
        if(d[1] == 'R')     y3++;
        else    y3--;
        if(x3 < 1 || x3 > n){
            d[0] = (d[0] == 'U' ? 'D' : 'U');
            bounce = 1;
        }
        if(y3 < 1 || y3 > m){
            d[1] = (d[1] == 'R' ? 'L' : 'R');
            bounce = 1;
        }
        if(bounce){
            count++;
            continue;
        }
        i = x3, j = y3;
        if(i == x2 && j == y2){
            cout << count << "\n";
            return;
        }
    }
    cout << "-1\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}