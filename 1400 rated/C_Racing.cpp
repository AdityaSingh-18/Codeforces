// Problem Link https://codeforces.com/contest/2110/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    for (auto &i : a)   cin >> i;
    for (int i = 0; i < n; i++){
        cin >> b[i].first >> b[i].second;
    }
    int height = 0;
    vector<int> last;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1)    last.push_back(i);
        else     height += a[i];
        while (height < b[i].first){
            if (last.empty()){
                cout << "-1\n";
                return;
            }
            a[last.back()] = 1;
            height++;
            last.pop_back();
        }
        while ((height + last.size()) > b[i].second) {
            if (last.empty()) {
                cout << "-1\n";
                return;
            }
            a[last.back()] = 0;
            last.pop_back();
        }
    }
    for (int i = 0; i < n; i++){
        cout << max(0, a[i]) << " \n"[i == n - 1];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}