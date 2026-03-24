// Problem Link 

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n - 2; i >= 0; i--){
        int j = 1;
        int k = a[i].size(), l = a[i + 1].size();
        while(j < k && j < l && a[i][j] == a[i + 1][j]){
            j++;
        }
        if(j == l || a[i][j] > a[i + 1][j]){
            a[i] = a[i].substr(0, j);
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << "\n";
    }
}

signed main(){
    solve();
}