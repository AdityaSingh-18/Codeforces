// Problem Link https://codeforces.com/contest/2107/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxElement = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxElement = max (maxElement, a[i]);
    }
    set<int> b(a.begin(), a.end());
    if((int)b.size() == 1){
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    for (int i = 0; i < n; i++){
        if(a[i] != maxElement)    cout << "1 ";
        else    cout << "2 ";
    }
    cout << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}