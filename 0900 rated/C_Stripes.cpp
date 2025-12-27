// Problem Link https://codeforces.com/contest/1742/problem/C

#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve (){
    vector<vector<char>> a(8, vector<char> (8));
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 8; i++){
        if(a[i][0] == 'R'){
            int j = 1;
            while(j < 8 && a[i][0] == a[i][j]){
                j++;
            }
            if(j == 8){
                cout << a[i][0] << "\n";
                return;
            } 
        }
        if(a[0][i] == 'B'){
            int j = 1;
            while(j < 8 && a[0][i] == a[j][i]){
                j++;
            }
            if(j == 8){
                cout << a[0][i] << "\n";
                return;
            }
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}