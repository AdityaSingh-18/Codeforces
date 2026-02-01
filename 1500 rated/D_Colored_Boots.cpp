// Problem Link https://codeforces.com/contest/1141/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string l, r;
    cin >> l >> r;
    multiset<pair<char,int>, greater<pair<char,int>>> a, b;
    for (int i = 0; i < n; i++) {
        a.insert({l[i], i + 1});
        b.insert({r[i], i + 1});
    }
    vector<pair<int,int>> ans;
    while (!a.empty()) {
        auto it = a.begin();
        char c = it->first;
        int i = it->second;
        if(c != '?'){
            auto it1 = b.lower_bound({c, LLONG_MAX});
            if (it1 != b.end() && it1->first == c) {
                int j = it1->second;
                ans.push_back({i, j});
                b.erase(it1);
            }
            else {
                auto it2 = b.lower_bound({'?', LLONG_MAX});
                if (it2 != b.end() && it2->first == '?') {
                    int j = it2->second;
                    ans.push_back({i, j});
                    b.erase(it2);
                }
            }
        }
        else{
            int j = b.begin()->second;
            ans.push_back({i, j});
            b.erase(b.begin());
        }
        a.erase(it);
    }
    cout << ans.size() << "\n";
    for (auto &i : ans) {
        cout << i.first << " " << i.second << "\n";
    }
}

signed main() {
    solve();
}
