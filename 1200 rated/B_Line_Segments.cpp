// Problem Link https://codeforces.com/contest/2119/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    double n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    vector<double> a(n);
    for (auto &i : a)    cin >> i;
    double dist = sqrt((x1 - x2) * (x1 - x2)  + (y1 - y2) * (y1 - y2));
    sort(a.begin(), a.end());
    if(dist < a[n - 1]){
        dist = a[n - 1] - dist;
        n--;
    }
    for (int i = 0; i < n; i++){
        dist -= a[i];
    }
    if(dist <= 0)   cout << "Yes\n";
    else    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}