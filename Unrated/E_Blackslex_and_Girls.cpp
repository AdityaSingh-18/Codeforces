// Problem Link https://codeforces.com/contest/2179/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    vector<int> vote(n);
    int sum = 0;
    for (auto  &i : vote){
        cin >> i;
        sum += i;
    }
    int hasZero = 0, hasOne = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '0')     hasZero = 1;
        else    hasOne = 1;
        if(hasOne && hasZero){
            break;
        }
    }
    if(!hasZero && (a + n) > b || !hasOne && a < (b + n) || sum > (a + b)){
        cout << "NO\n";
        return;
    }
    int minA = 0, minB = 0;
    for (int i = 0; i < n; i++){
        int x = (vote[i] + 2) / 2;
        if(s[i] == '0')    minA += x;
        else    minB += x;
        if(minA > a || minB > b){
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