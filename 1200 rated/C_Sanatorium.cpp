// Problem Link https://codeforces.com/contest/732/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int breakfast, dinner, supper;
    cin >> breakfast >> dinner >> supper;
    int count = 0;
    int maxMeal = max({breakfast, dinner, supper});
    if(breakfast < maxMeal)     count++;
    if(dinner < maxMeal)    count++;
    if(supper < maxMeal)    count++;
    cout << maxMeal * 3 - (breakfast + dinner + supper + count) << "\n";
}

signed main(){
    solve();
}