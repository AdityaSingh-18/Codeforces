// Problem Link https://codeforces.com/contest/1741/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int diff = 1, count = 0;
    for(int i = n; i > 1; i /= 2)
    {
        vector<int> b(i / 2);
        int j = 0;
        while(j < i){
            if(a[j] > a[j + 1]){
                count++;
                b[j / 2] = a[j + 1];
                swap(a[j + 1] , a[j]);
            }
            else    b[j / 2] = a[j];
            if(a[j + 1] - a[j] != diff){
                cout << -1 << "\n";
                return;
            }
            j += 2;
        }
        a = b;
        diff *= 2;
    }
    cout << count << "\n";   
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}