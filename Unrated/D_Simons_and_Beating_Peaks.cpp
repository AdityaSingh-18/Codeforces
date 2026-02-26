// Problem Link https://codeforces.com/contest/2205/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> left(n, -1), right(n, -1), b;
    for(int i = 0; i < n; i++){
        int x = -1;
        while(!b.empty() && a[b.back()] < a[i]){
            x = b.back();
            b.pop_back();
        }
        if(x != -1)    left[i] = x;
        if(!b.empty())    right[b.back()] = i;
        b.push_back(i);
    }
    vector<int> l(n), r(n), ans(n);
    iota(l.begin(), l.end(), 0);
    iota(r.begin(), r.end(), 0);
    stack<pair<int,int>> st;
    st.push({b[0], 0});
    while(!st.empty()){
        auto [val, flag] = st.top(); 
        st.pop();
        if(!flag){
            st.push({val, 1});
            if(left[val] != -1)     st.push({left[val], 0});
            if(right[val] != -1)     st.push({right[val], 0});
        } 
        else {
            if(left[val] != -1)     l[val] = l[left[val]];
            if(right[val] != -1)     r[val] = r[right[val]];
            int count1 = 0, count2 = 0;
            if(left[val] != -1)    count1 = ans[left[val]];
            if(right[val] != -1)    count2 = ans[right[val]];
            if(r[val] - l[val] > 1){
                ans[val] = min(r[val] - val + count1, val - l[val] + count2);
            }
        }
    }
    cout << ans[b[0]] << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}