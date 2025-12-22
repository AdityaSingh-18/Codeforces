// Problem Link https://codeforces.com/contest/1839/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    if(a[n - 1] == 1){
        cout << "NO\n";     
        return;
    }
    int i = n - 1, x = 0;
    while(i >= 0){
        if(i == 0 || a[i - 1] == 0){
            b[x] = 0;
            x++;
            i--;
        }
        else{
            int j = i - 1;
            while(j >= 0 && a[j] == 1){
                j--;
            }
            for(int k = j + 1; k < i; k++, x++){
                b[x] = 0;
            }
            b[x] = i - (j + 1);
            x++;
            i = j;
        }
    }        
    cout << "YES\n";
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