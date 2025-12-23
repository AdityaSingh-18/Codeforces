// Problem Link https://codeforces.com/contest/1819/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a)    cin >> i;
    map<int, int> b;
    for (auto &i : a){
        b[i]++;
    }
    int mex = n;
    for (int i = 0; i < n; i++){
        if(!b[i]){
            mex = i;
            break;
        }
    }
    if(mex == 0 || b[mex + 1] == 1){
        cout << "Yes\n";
        return;
    }
    else if(b[(mex + 1)] == 0){
        for (auto &i : b){
            if(i.first > (mex + 1) || i.second > 1){
                cout << "Yes\n";
                return;
            }
        }
        cout << "No\n";
    }
    else{
        int start = 0;
        for (int i = 0; i < n; i++){
            if(a[i] != (mex + 1) && !start)   continue;
            start = 1;
            b[a[i]]--;
            if(b[mex + 1] == 0){
                cout << "Yes\n";
                return;
            }
            if(a[i] < mex && b[a[i]] == 0){
                cout << "No\n";
                return;
            }
        }
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}