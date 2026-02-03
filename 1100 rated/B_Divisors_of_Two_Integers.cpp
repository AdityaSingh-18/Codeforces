// Problem Link https://codeforces.com/contest/1108/problem/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n;
    multiset<int> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    int maxElement = *a.rbegin();
    for(int i = 1; i <= maxElement; i++){
        if(maxElement % i == 0){
            auto it = a.find(i);
            a.erase(it);
        }
    }
    cout << maxElement << " " << *a.rbegin() << "\n";
}

signed main(){
    solve();
}