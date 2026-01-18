// Problem Link https://codeforces.com/contest/2185/problem/E

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> b;
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        b.insert(x);
    }
    string s;
    cin >> s;
    map<int, int> c;
    int shift = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == 'L')     shift--;
        else    shift++;
        if(c.find(shift) == c.end()){
            c[shift] = i;
        }
    }
    map<int, int> d;
    for(int i = 0; i < n; i++){
        auto it = b.lower_bound(a[i]);
        int count = k + 1;
        if(it != b.end()){
            int dist = *it - a[i];
            if(c.count(dist)){
                count = min(count, c[dist]);
            }
        }
        if(it != b.begin()){
            --it;
            int dist = *it - a[i];
            if(c.count(dist)){
                count = min(count, c[dist]);
            }
        }   
        if(count <= k)    d[count]++;
    }
    int alive = n;
    for(int i = 0; i < k; i++){
        alive -= d[i];
        cout << alive << " \n"[i == k - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}