// Problem Link 

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int k = k1 + k2;
    vector<int> a(n), b(n);
    priority_queue<int> c;
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    for (int i = 0; i < n; i++){
        c.push(abs(a[i] - b[i]));
    }
    while(k > 0){
        int x = c.top();
        c.pop();
        c.push(abs(x - 1));
        k--;
    }
    int sum = 0;
    while(!c.empty()){
        sum += c.top() * c.top();
        c.pop();
    }
    cout << sum << "\n";
}

signed main(){
    solve();
}