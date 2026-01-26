// Problem Link https://codeforces.com/contest/1492/problem/C 

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> right(m), left(m);   
    int j = 0;
    for (int i = 0; i < m; i++){
        while (s[j] != t[i])    j++; 
        left[i] = j++;
    }
    j = n - 1;
    for (int i = m - 1; i >= 0; i--){
        while (s[j] != t[i])    j--;
        right[i] = j--;
    }
    int maxDiff = 0;
    for (int i = 0; i < m - 1; i++){
        maxDiff = max(maxDiff, right[i + 1] - left[i]);
    }
    cout << maxDiff << "\n";
}

signed main(){
    solve();
}