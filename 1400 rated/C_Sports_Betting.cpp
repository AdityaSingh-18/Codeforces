// Problem Link https://codeforces.com/contest/2098/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (auto &i : a){
        cin >> i;
        freq[i]++;
    }
    sort(a.begin(), a.end());
    int x = -1;
    for (int i = 0; i < n; i++){
        if(a[i] < x)    continue;
        if (freq[a[i]] >= 4){
            cout << "Yes\n";
            return;
        }
        if (freq[a[i]] >= 2){
            for (int j = a[i] + 1; ; j++){
                if (freq[j] >= 2){
                    cout << "Yes\n";
                    return;
                }
                else if (!freq[j]){
                    x = j;
                    break;
                }
            }
        }
    }
    cout << "No\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}