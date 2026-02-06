// Problem Link https://codeforces.com/contest/2102/problem/D

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10;
int a[N], b[N], n;

void update(int x) {
    while (x <= n) {
        b[x]++;
        x += (x & -x);
    }
}

int query(int x) {
    int ans = 0;
    while (x) {
        ans += b[x];
        x -= (x & -x);
    }
    return ans;
}

int checkSwap(vector<int> &arr) {
    fill(b, b + n + 1, 0);
    int ans = 0;
    for (int i = (int)arr.size() - 1; i >= 0; i--) {
        ans += query(arr[i]);
        update(arr[i]);
    }
    return ans;
}

void solve(){
    cin >> n;
    vector<int> a1, a2;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (i % 2) a1.push_back(x);
        else a2.push_back(x);
    }
    bool isSwap = (checkSwap(a1) % 2) != (checkSwap(a2) % 2);
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    int x1 = 0, x2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2){
            a[i] = a1[x1];  
            x1++;
        }
        else{
            a[i] = a2[x2];  
            x2++;
        }
    }
    if (isSwap){
        swap(a[n], a[n - 2]);
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " \n"[i == n];
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
