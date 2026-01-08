// Problem Link https://codeforces.com/contest/2162/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    for (int i = 0; i < n; i++){
        if(s[i] == '1')    a.push_back(i + 1);
    }
    cout << a.size() << "\n";
    for (auto &i : a)    cout << i << " ";
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}