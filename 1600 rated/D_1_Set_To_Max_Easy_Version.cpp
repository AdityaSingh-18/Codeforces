// Problem Link https://codeforces.com/contest/1904/problem/D1

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    int flag = 1;
    for (int i = 0; i < n; i++){
        if(a[i] == b[i])    continue;
        if(a[i] > b[i]){
            cout << "NO\n";
            return;
        }
        int found = 0, j = i - 1;
        while(j >= 0 && a[j] <= b[i] && b[i] <= b[j]){
            if(a[j] == b[i]){
                found = 1;
                break;
            }
            j--;
        }
        if(!found){
            j = i + 1;
            while(j < n && a[j] <= b[i] && b[i] <= b[j]){
                if(a[j] == b[i]){
                    found = 1;
                    break;
                }
                j++;
            }
        }
        if(!found){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}