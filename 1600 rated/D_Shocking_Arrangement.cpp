// Problem Link https://codeforces.com/contest/1798/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << "No\n";
        return;
    }
    sort(a.rbegin(), a.rend());
    int diff = a[0] - a[n - 1];
    int sum = 0, k = 0;
    for (int i = 0, j = n - 1; i <= j;){
        if((sum + a[i]) < diff){
            b[k] = a[i];
            sum += a[i];
            i++;
            k++;
        }
        else if((sum + a[j]) < diff){
            b[k] = a[j];
            sum += a[j];
            j--;
            k++;
        }
        else{
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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