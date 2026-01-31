// Problem Link https://codeforces.com/contest/1461/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void findAllSum(vector<int> &a, set<int> &b, int n, int left, int right){
    int sum = 0;
    for (int i = left; i <= right; i++){
        sum += a[i];
    }
    b.insert(sum);
    int mid = (a[right] + a[left]) / 2;
    int k = -1;
    for (int i = left; i <= right; i++){
        if(a[i] <= mid)    k = i;
        else    break;
    }
    if(k == -1 || k == right)   return;
    findAllSum(a, b, n, left, k);
    findAllSum(a, b, n, k + 1, right);
}

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    set<int> b;
    for (auto &i : a)    cin >> i;
    sort(a.begin(), a.end());
    findAllSum(a, b, n, 0, n - 1);
    while(q--){
        int y;
        cin >> y;
        if(b.count(y))    cout << "Yes\n";
        else     cout << "No\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/* 
#include <bits/stdc++.h>
using namespace std;
#define int long long

void findAllSum(vector<int> a, set<int> &b, int n, int left, int right){
    int l = lower_bound(a.begin(), a.end(), left) - a.begin();
    int r = upper_bound(a.begin(), a.end(), right) - a.begin();
    int sum = pref[r] - pref[l];
    b.insert(sum);
    if(left == right)    return;
    int mid = (right + left) / 2;
    auto it = upper_bound(a.begin(), a.end(), mid);
    int mid2 = *it, mid1 = *(--it);
    findAllSum(a, pref, b, n, left, mid1);
    findAllSum(a, pref, b, n, mid2, right);
}

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    set<int> b;
    for (auto &i : a)    cin >> i;
    sort(a.begin(), a.end());
    findAllSum(a, b, n, 0, n - 1);
    while(q--){
        int y;
        cin >> y;
        if(b.count(y))    cout << "Yes\n";
        else     cout << "No\n";
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
*/