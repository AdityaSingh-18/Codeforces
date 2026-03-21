// Problem Link https://codeforces.com/contest/1619/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    int mex = 0;
    for (int i = 0; i <= n; i++){
        if(b[i])    cout << b[i] << " ";
        else{
            cout << "0 ";
            mex = i;
            break;
        }
    }
    int x = mex - 1, count = 0;
    for (int i = mex; i < n; i++){
        if(!b[i]){
            while(x >= 0 && b[x] <= 1)  x--;
            if(x < 0){
                while(i < n){
                    cout << -1 << " \n"[i == n - 1];
                    i++;
                }
                return;
            }
            else{
                count += i - x;
                b[x]--;
            }
        }
        else    x = i;
        cout << b[i + 1] + count << " \n"[i == n - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}