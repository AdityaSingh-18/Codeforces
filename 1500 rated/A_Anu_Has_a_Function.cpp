// Problem Link https://codeforces.com/problemset/problem/1299/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), pref(n), suff(n);
    for (auto &i : a)   cin >> i;
    pref[0] = ~a[0];
    for (int i = 1; i < n; i++){
        pref[i] = (pref[i - 1] & ~a[i]);
    }
    suff[n - 1] = ~a[n - 1];
    for (int i = n - 2; i >= 0; i--){
        suff[i] = (suff[i + 1] & ~a[i]);
    }
    int maxSum = (a[0] & suff[1]), k = 0;
    for (int i = 1; i < n - 1; i++){
        int sum = (pref[i - 1] & a[i] & suff[i + 1]);
        if(sum > maxSum){
            maxSum = sum;
            k = i;
        }
    }
    if((pref[n - 2] & a[n - 1]) > maxSum)    k = n - 1;
    cout << a[k] << " ";
    for (int i = 0; i < n; i++){
        if(i == k)     continue;
        cout << a[i] << " \n"[i == n - 1];
    }
}

signed main(){
    solve();
}


/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)   cin >> i;
    int maxSum = 0, k = 0;
    for (int i = 0; i < n; i++){
        int sum = a[i];
        for (int j = 0; j < n; j++){
            if(j == i)    continue;
            sum = (sum | a[j]) - a[j];
        }
        if(sum > maxSum){
            maxSum = sum;
            k = i;
        }
    }
    cout << a[k] << " ";
    for (int i = 0; i < n; i++){
        if(i == k)     continue;
        cout << a[i] << " \n"[i == n - 1];
    }
}

signed main(){
    solve();
}
*/