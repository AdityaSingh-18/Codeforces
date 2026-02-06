// Problem Link https://codeforces.com/contest/2171/problem/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0)    a.push_back(i);
        else if (i % 3 == 0)    b.push_back(i);
        else    c.push_back(i);
    }
    while(a.size() > 1 && c.size() > 0){
        cout << a.back() << " ";
        a.pop_back();
        cout << a.back() << " ";
        a.pop_back();
        cout << c.back() << " ";
        c.pop_back();
    }
    while(b.size() > 1 && c.size() > 0){
        cout << b.back() << " ";
        b.pop_back();
        cout << b.back() << " ";
        b.pop_back();
        cout << c.back() << " ";
        c.pop_back();
    }
    for(int i : a)    cout << i << " ";
    for(int i : b)    cout << i << " ";
    for(int i : c)    cout << i << " ";
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}