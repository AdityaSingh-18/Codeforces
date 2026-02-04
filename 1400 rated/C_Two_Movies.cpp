// Problem Link https://codeforces.com/contest/1989/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    int countA = 0, countB = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++){
        if(a[i] == b[i]){
            if(a[i] == 1)     pos++;
            else if(a[i] == -1)     neg--;
        }
        else if (a[i] == 1)     countA++ ;
        else if (b[i] == 1)     countB++;
    }
    int maxRating = -1e18;
    for (int i = pos; i >= neg; i--){
        maxRating = max(maxRating, min(countA + i, countB + neg + (pos - i)));
    }
    cout << maxRating << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}